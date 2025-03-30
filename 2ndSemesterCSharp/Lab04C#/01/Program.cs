abstract class Shape
{
    public abstract double CalculateArea(); // Абстрактен метод, без тяло

    public void DisplayMessage() // Метод с тяло
    {
        Console.WriteLine("Това е фигура.");
    }
}

class Rectangle : Shape
{
    private double width;
    private double height;

    public Rectangle(double width, double height)
    {
        this.width = width;
        this.height = height;
    }

    public override double CalculateArea() // Имплементация на абстрактния метод
    {
        return width * height;
    }
}

class Circle : Shape
{
    private double radius;

    public Circle(double radius)
    {
        this.radius = radius;
    }

    public override double CalculateArea()
    {
        return Math.PI * radius * radius;
    }
}

// В основния код
class Program
{
    static void Main()
    {
        Shape rectangle = new Rectangle(5, 10);
        Shape circle = new Circle(7);

        Console.WriteLine($"Площ на правоъгълника: {rectangle.CalculateArea()}");
        Console.WriteLine($"Площ на кръга: {circle.CalculateArea()}");

        rectangle.DisplayMessage();
        circle.DisplayMessage();
    }
}
