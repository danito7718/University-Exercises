using System;

class Point
{
    private double x; // Координата x на точката
    private double y; // Координата y на точката

    // Метод за въвеждане на стойности
    public void InputValues()
    {
        Console.Write("Въведете x координатата на точката: ");
        x = double.Parse(Console.ReadLine());
        Console.Write("Въведете y координатата на точката: ");
        y = double.Parse(Console.ReadLine());
    }

    // Метод за извеждане на стойностите
    public void DisplayValues()
    {
        Console.WriteLine($"Координати на точката: ({x}, {y})");
    }

    // Методи за достъп до координатите
    public double GetX() => x;
    public double GetY() => y;
}

class Rectangle
{
    private double x; // Координата x на горния ляв ъгъл
    private double y; // Координата y на горния ляв ъгъл
    private double width; // Широчина на правоъгълника
    private double height; // Височина на правоъгълника

    // Метод за въвеждане на стойности
    public void InputValues()
    {
        Console.Write("Въведете x координатата на горния ляв ъгъл: ");
        x = double.Parse(Console.ReadLine());
        Console.Write("Въведете y координатата на горния ляв ъгъл: ");
        y = double.Parse(Console.ReadLine());
        Console.Write("Въведете широчината на правоъгълника: ");
        width = double.Parse(Console.ReadLine());
        Console.Write("Въведете височината на правоъгълника: ");
        height = double.Parse(Console.ReadLine());
    }

    // Метод за извеждане на стойностите
    public void DisplayValues()
    {
        Console.WriteLine($"Координати на горния ляв ъгъл: ({x}, {y})");
        Console.WriteLine($"Широчина: {width}, Височина: {height}");
    }

    // Метод, който проверява дали дадена точка попада в правоъгълника
    public bool Contains(Point point)
    {
        double px = point.GetX();
        double py = point.GetY();
        return px >= x && px <= (x + width) && py >= y && py <= (y + height);
    }
}

class Program
{
    static void Main(string[] args)
    {
        // Въвеждане на правоъгълник
        Console.WriteLine("Въведете данни за правоъгълника:");
        Rectangle rectangle = new Rectangle();
        rectangle.InputValues();

        // Въвеждане на точка
        Console.WriteLine("Въведете данни за точка:");
        Point point = new Point();
        point.InputValues();

        // Проверка дали точката попада в правоъгълника
        rectangle.DisplayValues();
        point.DisplayValues();
        if (rectangle.Contains(point))
        {
            Console.WriteLine("Точката попада в правоъгълната област.");
        }
        else
        {
            Console.WriteLine("Точката е извън правоъгълната област.");
        }
    }
}
