import java.net.URL;
import java.net.URLConnection;
import java.net.MalformedURLException;
import java.io.IOException;

public class Task1 {

    // URL заявка към тествания сървър
    private static final String REQUEST = "https://www.tu-sofia.bg";

    public static void main(String[] args) {
        try {
            // Създаване на URL обект за комуникация с Web сървъра
            URL server = new URL(REQUEST);

            // Създаване на комуникационен канал
            URLConnection conn = server.openConnection();

            // Проверка дали има отговор от сървъра
            if (conn.getContentLength() == -1) {
                System.out.println("Грешка! Няма връзка със сървъра или протоколът не се поддържа.");
                return;
            }

            // Извличане на информация за сървъра от заглавния блок
            String serverInfo = conn.getHeaderField("Server");

            if (serverInfo == null) {
                System.out.println("Информацията за сървъра е блокирана от администратора.");
            } else {
                System.out.println("Информация за Web сървъра:");
                System.out.println("═══════════════════════════════════");
                System.out.println("URL: " + REQUEST);
                System.out.println("Server: " + serverInfo);
                System.out.println("═══════════════════════════════════");
            }

        } catch (MalformedURLException e) {
            System.out.println("Грешка! Невалиден URL адрес: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("Грешка при комуникация: " + e.getMessage());
        }
    }
}