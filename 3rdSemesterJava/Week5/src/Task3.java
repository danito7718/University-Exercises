import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.UnknownHostException;
import java.io.IOException;

public class Task3 {

    // Име на хоста
    private static final String HOSTNAME = "www.tu-sofia.bg";

    // Начален и краен порт за сканиране
    private static final int START_PORT = 1;
    private static final int END_PORT = 1024;

    // Timeout период в милисекунди
    private static final int TIMEOUT = 1000;

    public static void main(String[] args) {
        try {
            // Получаване на IP адреса на хоста
            InetAddress host = InetAddress.getByName(HOSTNAME);

            System.out.println("═══════════════════════════════════");
            System.out.println("Сканиране на портове");
            System.out.println("═══════════════════════════════════");
            System.out.println("Хост: " + HOSTNAME);
            System.out.println("IP адрес: " + host.getHostAddress());
            System.out.println("Диапазон: " + START_PORT + " - " + END_PORT);
            System.out.println("Timeout: " + TIMEOUT + " ms");
            System.out.println("═══════════════════════════════════");

            // Записване на началното време
            long startTime = System.currentTimeMillis();

            int openPorts = 0;

            // Сканиране на портовете
            for (int port = START_PORT; port <= END_PORT; port++) {
                Socket socket = null;

                try {
                    socket = new Socket();
                    socket.connect(new InetSocketAddress(host, port), TIMEOUT);

                    // Портът е отворен
                    System.out.println("Порт " + port + " е ОТВОРЕН - " + getServiceName(port));
                    openPorts++;

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

            // Записване на крайното време
            long endTime = System.currentTimeMillis();
            long duration = endTime - startTime;

            // Показване на резултатите
            System.out.println("═══════════════════════════════════");
            System.out.println("Сканирането приключи!");
            System.out.println("Отворени портове: " + openPorts);
            System.out.println("Време за изпълнение: " + duration + " ms (" + (duration / 1000.0) + " сек)");
            System.out.println("═══════════════════════════════════");

        } catch (UnknownHostException e) {
            System.out.println("Грешка! Хостът не може да бъде намерен: " + e.getMessage());
        }
    }

    // Метод за получаване на името на услугата по номер на порт
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