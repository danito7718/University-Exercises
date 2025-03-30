using System;

class SpeedConverter
{
    // Метод за преобразуване от метри в секунда в километри в час
    public static double MetersPerSecondToKilometersPerHour(double speedMps)
    {
        return speedMps * 3.6;
    }

    // Метод за преобразуване от километри в час в метри в секунда
    public static double KilometersPerHourToMetersPerSecond(double speedKph)
    {
        return speedKph / 3.6;
    }
}

class Program
{
    static void Main()
    {
        // Примерна употреба на класа SpeedConverter
        Console.Write("Въведете скорост в метри в секунда: ");
        double speedMps = double.Parse(Console.ReadLine());
        double speedKph = SpeedConverter.MetersPerSecondToKilometersPerHour(speedMps);
        Console.WriteLine($"{speedMps} m/s = {speedKph:F2} km/h");

        Console.Write("Въведете скорост в километри в час: ");
        double speedKphInput = double.Parse(Console.ReadLine());
        double speedMpsConverted = SpeedConverter.KilometersPerHourToMetersPerSecond(speedKphInput);
        Console.WriteLine($"{speedKphInput} km/h = {speedMpsConverted:F2} m/s");
    }
}
