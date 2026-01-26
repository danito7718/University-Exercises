import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.SocketTimeoutException;
import java.net.UnknownHostException;
import java.io.IOException;

public class Task2 {

    // Име на хоста
    private static final String HOSTNAME = "www.tu-sofia.bg";

    // Порт за проверка (80 = HTTP Web сървър)
    private static final int PORT = 80;

    //Timeout период в милисекунди
    private static final int TIMEOUT = 2000;

    public static void main(String[] args) {
        Socket socket = null;

        try {
            // Получаване на IP адреса на хоста
            InetAddress host = InetAddress.getByName(HOSTNAME);
            System.out.println("Проверка на хост: " + HOSTNAME);
            System.out.println("IP адрес: " + host.getHostAddress());
            System.out.println("Порт: " + PORT);
            System.out.println("Timeout: " + TIMEOUT + " ms");
            System.out.println("═══════════════════════════════════");

            // Създаване на сокет
            socket = new Socket();

            // Опит за свързване с услугата
            socket.connect(new InetSocketAddress(host, PORT), TIMEOUT);

            // Ако няма изключение - услугата е активна
            System.out.println("✓ Портът " + PORT + " е ОТВОРЕН");
            System.out.println("Услугата е АКТИВНА!");

        } catch (UnknownHostException e) {
            System.out.println("✗ Грешка! Хостът не може да бъде намерен: " + e.getMessage());
        } catch (SocketTimeoutException e) {
            System.out.println("✗ Сървърът не отговаря за зададеното време (timeout)");
        } catch (IOException e) {
            System.out.println("✗ Портът " + PORT + " е ЗАТВОРЕН");
            System.out.println("Услугата НЕ Е активна!");
        } finally {
            // Затваряне на сокета
            if (socket != null) {
                try {
                    socket.close();
                } catch (IOException e) {
                    System.out.println("Грешка при затваряне на сокета: " + e.getMessage());
                }
            }
        }
    }
}