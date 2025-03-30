using System;

class Point
{
    private double x;
    private double y;

    // Метод за въвеждане на координати
    public void InputValues()
    {
        Console.Write("Въведете x координатата: ");
        x = double.Parse(Console.ReadLine());
        Console.Write("Въведете y координатата: ");
        y = double.Parse(Console.ReadLine());
    }

    // Метод за извеждане на стойностите на координатите
    public void DisplayValues()
    {
        Console.WriteLine($"Координати на точката: ({x}, {y})");
    }

    // Метод за транслация
    public void Translate(double Vx, double Vy)
    {
        x += Vx;
        y += Vy;
        Console.WriteLine($"Точката е преместена с вектор ({Vx}, {Vy}). Нови координати: ({x}, {y})");
    }

    // Метод за ротация
    public void Rotate(double angle)
    {
        double radians = angle * (Math.PI / 180); // Преобразуваме градуси в радиани
        double x1 = x * Math.Cos(radians) - y * Math.Sin(radians);
        double y1 = x * Math.Sin(radians) + y * Math.Cos(radians);
        x = x1;
        y = y1;
        Console.WriteLine($"Точката е завъртяна с {angle} градуса. Нови координати: ({x}, {y})");
    }

    // Метод за мащабиране
    public void Scale(double kx, double ky)
    {
        x *= kx;
        y *= ky;
        Console.WriteLine($"Точката е мащабирана с коефициенти ({kx}, {ky}). Нови координати: ({x}, {y})");
    }
}

class Program
{
    static void Main(string[] args)
    {
        // Създаване на масив от три точки
        Point[] points = new Point[3];
        for (int i = 0; i < points.Length; i++)
        {
            Console.WriteLine($"Въведете координатите за точка {i + 1}:");
            points[i] = new Point();
            points[i].InputValues();
        }

        // Извършване на трансформации
        while (true)
        {
            Console.WriteLine("\nИзберете действие: 1 - Транслация, 2 - Ротация, 3 - Мащабиране, 4 - Показване на координати, 0 - Изход");
            int action = int.Parse(Console.ReadLine());

            if (action == 0) break;

            Console.WriteLine("Изберете индекс на точка (1, 2 или 3):");
            int index = int.Parse(Console.ReadLine()) - 1;

            if (index < 0 || index >= points.Length)
            {
                Console.WriteLine("Невалиден индекс на точка.");
                continue;
            }

            switch (action)
            {
                case 1: // Транслация
                    Console.WriteLine("Въведете Vx и Vy:");
                    double Vx = double.Parse(Console.ReadLine());
                    double Vy = double.Parse(Console.ReadLine());
                    points[index].Translate(Vx, Vy);
                    break;

                case 2: // Ротация
                    Console.WriteLine("Въведете ъгъл на завъртане (в градуси):");
                    double angle = double.Parse(Console.ReadLine());
                    points[index].Rotate(angle);
                    break;

                case 3: // Мащабиране
                    Console.WriteLine("Въведете коефициенти за мащабиране kx и ky:");
                    double kx = double.Parse(Console.ReadLine());
                    double ky = double.Parse(Console.ReadLine());
                    points[index].Scale(kx, ky);
                    break;

                case 4: // Показване на координати
                    points[index].DisplayValues();
                    break;

                default:
                    Console.WriteLine("Невалидно действие.");
                    break;
            }
        }
    }
}
