
using System;

namespace ShapeAreaCalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                Console.WriteLine("Изберете фигура за която искате да намерите лицето:");
                Console.WriteLine("1. Квадрат");
                Console.WriteLine("2. Правоъгълник");
                Console.WriteLine("3. Кръг");
                Console.WriteLine("4. Триъгълник");
                Console.WriteLine("5. Изход");

                int choice = int.Parse(Console.ReadLine());

                switch (choice)
                {
                    case 1:
                        CalculateSquareArea();
                        break;
                    case 2:
                        CalculateRectangleArea();
                        break;
                    case 3:
                        CalculateCircleArea();
                        break;
                    case 4:
                        CalculateTriangleArea();
                        break;
                    case 5:
                        return;
                    default:
                        Console.WriteLine("Невалиден избор. Моля, опитайте отново.");
                        break;
                }
            }
        }

        static void CalculateSquareArea()
        {
            Console.WriteLine("Въведете дължината на страната на квадрата:");
            double side = double.Parse(Console.ReadLine());
            double area = side * side;
            Console.WriteLine($"Лицето на квадрата е: {area}");
        }

        static void CalculateRectangleArea()
        {
            Console.WriteLine("Въведете дължината на правоъгълника:");
            double length = double.Parse(Console.ReadLine());
            Console.WriteLine("Въведете ширината на правоъгълника:");
            double width = double.Parse(Console.ReadLine());
            double area = length * width;
            Console.WriteLine($"Лицето на правоъгълника е: {area}");
        }

        static void CalculateCircleArea()
        {
            Console.WriteLine("Въведете радиуса на кръга:");
            double radius = double.Parse(Console.ReadLine());
            double area = Math.PI * radius * radius;
            Console.WriteLine($"Лицето на кръга е: {area}");
        }

        static void CalculateTriangleArea()
        {
            Console.WriteLine("Въведете основата на триъгълника:");
            double baseLength = double.Parse(Console.ReadLine());
            Console.WriteLine("Въведете височината на триъгълника:");
            double height = double.Parse(Console.ReadLine());
            double area = 0.5 * baseLength * height;
            Console.WriteLine($"Лицето на триъгълника е: {area}");
        }
    }
}
