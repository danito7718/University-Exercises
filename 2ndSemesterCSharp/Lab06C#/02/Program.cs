using System;

class Program
{
    static void Main(string[] args)
    {
        //Circle
        Rectangle rectangle = new Rectangle(5, 10);
        Console.WriteLine("Площ на правоъгълника: " + rectangle.Area());

        //Circle
        Circle circle = new Circle(7);
        Console.WriteLine("Площ на кръга: " + circle.Area());
    }
}
class Rectangle
{
    double width;
    double height;
    public Rectangle()
    {
      
    }

    public Rectangle(double width, double height)
    {
        this.width = width;
        this.height = height;
    }

    public double Area()
    {
        return width * height;
    }
}

class Circle
{
    double radius;
    public Circle()
    { 
    }
    public Circle(double radius)
    {
        this.radius = radius;
    }
    public double Area()
    {
        return Math.PI * radius * radius;
    }
}

