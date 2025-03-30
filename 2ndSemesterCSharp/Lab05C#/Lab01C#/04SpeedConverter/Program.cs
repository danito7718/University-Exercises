using System;

namespace SpeedConverter
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                Console.WriteLine("Изберете опция:");
                Console.WriteLine("1. Преобразуване от км/час в м/сек");
                Console.WriteLine("2. Преобразуване от м/сек в км/час");
                Console.WriteLine("3. Изход");

                int choice = int.Parse(Console.ReadLine());

                switch (choice)
                {
                    case 1:
                        Console.WriteLine("Въведете скорост в км/час:");
                        double kmPerHour = double.Parse(Console.ReadLine());
                        double metersPerSecond = ConvertKmPerHourToMetersPerSecond(kmPerHour);
                        Console.WriteLine($"Скоростта в м/сек е: {metersPerSecond}");
                        break;
                    case 2:
                        Console.WriteLine("Въведете скорост в м/сек:");
                        metersPerSecond = double.Parse(Console.ReadLine());
                        kmPerHour = ConvertMetersPerSecondToKmPerHour(metersPerSecond);
                        Console.WriteLine($"Скоростта в км/час е: {kmPerHour}");
                        break;
                    case 3:
                        return;
                    default:
                        Console.WriteLine("Невалиден избор. Моля, опитайте отново.");
                        break;
                }
            }
        }

        static double ConvertKmPerHourToMetersPerSecond(double kmPerHour)
        {
            return kmPerHour / 3.6;
        }

        static double ConvertMetersPerSecondToKmPerHour(double metersPerSecond)
        {
            return metersPerSecond * 3.6;
        }
    }
}
