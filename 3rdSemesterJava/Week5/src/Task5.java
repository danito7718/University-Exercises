import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.UnknownHostException;
import java.io.IOException;
import java.util.concurrent.Executors;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.TimeUnit;

// Клас за нишка, която проверява един порт (Runnable)
class PortScanTask implements Runnable {

    private InetAddress host;
    private int port;
    private int timeout;

    public PortScanTask(InetAddress host, int port, int timeout) {
        this.host = host;
        this.port = port;
        this.timeout = timeout;
    }

    @Override
    public void run() {
        Socket socket = null;

        try {
            socket = new Socket();
            socket.connect(new InetSocketAddress(host, port), timeout);

            // Портът е отворен
            System.out.println("Порт " + port + " е ОТВОРЕН - " + getServiceName(port));

        } catch (IOException e) {
            // Портът е затворен - не правим нищо
        } finally {
            if (socket != null) {
                try {
                    socket.close();
                } catch (IOException e) {
                    // Игнориране на грешка при затваряне
                }
            }
        }
    }

    // Метод за получаване на името на услугата
    private static String getServiceName(int port) {
        switch (port) {
            case 21: return "FTP";
            case 22: return "SSH";
            case 23: return "Telnet";
            case 25: return "SMTP";
            case 53: return "DNS";
            case 80: return "HTTP";
            case 110: return "POP3";
            case 143: return "IMAP";
            case 443: return "HTTPS";
            case 3306: return "MySQL";
            case 3389: return "RDP";
            case 5432: return "PostgreSQL";
            case 8080: return "HTTP-Alt";
            default: return "Неизвестна услуга";
        }
    }
}

public class Task5 {

    // Име на хоста
    private static final String HOSTNAME = "www.tu-sofia.bg";

    // Начален и краен порт
    private static final int START_PORT = 1;
    private static final int END_PORT = 1024;

    // Timeout период за проверка на порт
    private static final int TIMEOUT = 1000;

    // Timeout за приключване на всички задачи
    private static final int TASK_TIMEOUT = 60;

    public static void main(String[] args) {
        try {
            // Получаване на IP адреса на хоста
            InetAddress host = InetAddress.getByName(HOSTNAME);

            // Изчисляване на оптимален брой нишки
            int cores = Runtime.getRuntime().availableProcessors();
            // Number of threads = Number of CPU Cores * (1 + Wait time / Service time)
            // За I/O операции използваме формулата
            int numThreads = cores * 2; // Опростена версия

            System.out.println("═══════════════════════════════════");
            System.out.println("Thread Pool сканиране на портове");
            System.out.println("═══════════════════════════════════");
            System.out.println("Хост: " + HOSTNAME);
            System.out.println("IP адрес: " + host.getHostAddress());
            System.out.println("Диапазон: " + START_PORT + " - " + END_PORT);
            System.out.println("Timeout: " + TIMEOUT + " ms");
            System.out.println("CPU ядра: " + cores);
            System.out.println("Брой нишки: " + numThreads);
            System.out.println("═══════════════════════════════════");

            // Записване на началното време
            long startTime = System.currentTimeMillis();

            // Създаване на thread pool
            // Вариант 1: Fixed thread pool
            ExecutorService executor = Executors.newFixedThreadPool(numThreads);

            // Вариант 2: Cached thread pool (динамично управление)
            // ExecutorService executor = Executors.newCachedThreadPool();

            // Добавяне на задачи в thread pool
            for (int port = START_PORT; port <= END_PORT; port++) {
                PortScanTask task = new PortScanTask(host, port, TIMEOUT);
                executor.execute(task);
            }

            // Затваряне на executor и изчакване на задачите
            executor.shutdown();

            try {
                // Изчакване всички задачи да приключат
                if (!executor.awaitTermination(TASK_TIMEOUT, TimeUnit.SECONDS)) {
                    System.out.println("Някои задачи не приключиха навреме. Принудително терминиране...");
                    executor.shutdownNow();
                }
            } catch (InterruptedException e) {
                executor.shutdownNow();
                Thread.currentThread().interrupt();
            }

            // Записване на крайното време
            long endTime = System.currentTimeMillis();
            long duration = endTime - startTime;

            // Показване на резултатите
            System.out.println("═══════════════════════════════════");
            System.out.println("Сканирането приключи!");
            System.out.println("Време за изпълнение: " + duration + " ms (" + (duration / 1000.0) + " сек)");
            System.out.println("═══════════════════════════════════");

        } catch (UnknownHostException e) {
            System.out.println("Грешка! Хостът не може да бъде намерен: " + e.getMessage());
        }
    }
}