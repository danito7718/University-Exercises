//Да се декларира С# клас Time, описващ време с полета за час, минута и секунда. 
//Класът да съдържа два конструктора – един без параметри и
//втори с три параметъра, които дават стойности на полетата. Класът да
//съдържа и метод, който извежда времето в следния формат: hh: mm: ss.
//Да се създаде конзолно приложение, което демонстрира работата на
//класа.

Console.Write("Въведете час:");
int hour = int.Parse(Console.ReadLine());
Console.Write("Въведете минути:");
int minutes = int.Parse(Console.ReadLine());
Console.Write("Въведете секунди :");
int seconds = int.Parse(Console.ReadLine());

Time time = new Time(hour,minutes,seconds);
time.TimeOutput();
class Time
{
    int hour;
    int minutes;
    int seconds;
    public Time()
    {

    }
    public Time(int hour, int minutes, int seconds)
    {
        this.hour = hour;
        this.minutes = minutes;
        this.seconds = seconds;
    }

    public void TimeOutput()
    {
        Console.WriteLine($"Времето в момента е: {hour:d2}:{minutes:d2}:{seconds:d2}");
    }
}



