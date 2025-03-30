
Console.WriteLine("Въведете n за квадрат и триъгълник:");
int n = int.Parse(Console.ReadLine());

Console.WriteLine("Въведете m за правоъгълник:");
int m = int.Parse(Console.ReadLine());

PrintSquare(n);
PrintRectangle(m, n);
PrintTriangle(n);

static void PrintSquare(int n)
{
    Console.WriteLine("\nКвадрат:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Console.Write("*");
        }
        Console.WriteLine();
    }
}

static void PrintRectangle(int m, int n)
{
    Console.WriteLine("\nПравоъгълник:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Console.Write("*");
        }
        Console.WriteLine();
    }
}

static void PrintTriangle(int n)
{
    Console.WriteLine("\nТриъгълник:");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            Console.Write("*");
        }
        Console.WriteLine();
    }
}

