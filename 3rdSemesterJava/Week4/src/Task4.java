import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.UnknownHostException;
import java.io.IOException;

// Клас за нишка, която проверява един порт
class ScanThread extends Thread {

    // Статични полета - споделени между всички нишки
    static InetAddress host;
    static int timeout;

    // Конструктор - получава номер на порт като име на нишката
    public ScanThread(int port) {
        super("" + port);
    }

    @Override
    public void run() {
        Socket socket = null;

        try {
            // Получаване на номера на порта от името на нишката
            int port = Integer.parseInt(getName());

            // Създаване и свързване на сокет
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

public class Task4 {

    // Име на хоста
    private static final String HOSTNAME = "www.tu-sofia.bg";

    // Начален и краен порт
    private static final int START_PORT = 1;
    private static final int END_PORT = 1024;

    // Timeout период
    private static final int TIMEOUT = 1000;

    public static void main(String[] args) {
        try {
            // Получаване на IP адреса на хоста
            ScanThread.host = InetAddress.getByName(HOSTNAME);
            ScanThread.timeout = TIMEOUT;

            System.out.println("═══════════════════════════════════");
            System.out.println("Многонишково сканиране на портове");
            System.out.println("═══════════════════════════════════");
            System.out.println("Хост: " + HOSTNAME);
            System.out.println("IP адрес: " + ScanThread.host.getHostAddress());
            System.out.println("Диапазон: " + START_PORT + " - " + END_PORT);
            System.out.println("Timeout: " + TIMEOUT + " ms");
            System.out.println("═══════════════════════════════════");

            // Записване на началното време
            long startTime = System.currentTimeMillis();

            // Стартиране на нишки за всеки порт
            for (int port = START_PORT; port <= END_PORT; port++) {
                ScanThread thread = new ScanThread(port);
                thread.start();
            }

            // Изчакване всички нишки да приключат
            // Използваме activeCount() за проверка
            while (Thread.activeCount() > 1) {
                try {
                    Thread.sleep(100);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
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