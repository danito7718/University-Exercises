using System;

namespace TemperatureConverter
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                Console.WriteLine("Изберете опция:");
                Console.WriteLine("1. Преобразуване от Целзий към Фаренхайт");
                Console.WriteLine("2. Преобразуване от Фаренхайт към Целзий");
                Console.WriteLine("3. Изход");

                int choice = int.Parse(Console.ReadLine());

                switch (choice)
                {
                    case 1:
                        Console.WriteLine("Въведете температура в Целзий:");
                        double celsius = double.Parse(Console.ReadLine());
                        double fahrenheit = ConvertCelsiusToFahrenheit(celsius);
                        Console.WriteLine($"Температурата в Фаренхайт е: {fahrenheit}");
                        break;
                    case 2:
                        Console.WriteLine("Въведете температура в Фаренхайт:");
                        fahrenheit = double.Parse(Console.ReadLine());
                        celsius = ConvertFahrenheitToCelsius(fahrenheit);
                        Console.WriteLine($"Температурата в Целзий е: {celsius}");
                        break;
                    case 3:
                        return;
                    default:
                        Console.WriteLine("Невалиден избор. Моля, опитайте отново.");
                        break;
                }
            }
        }

        static double ConvertCelsiusToFahrenheit(double celsius)
        {
            return 1.8 * celsius + 32;
        }

        static double ConvertFahrenheitToCelsius(double fahrenheit)
        {
            return (fahrenheit - 32) / 1.8;
        }
    }
}
