using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Въведете височината на коледната елха:");
        int height = int.Parse(Console.ReadLine());

        PrintNumberChristmasTree(height);
        Console.WriteLine();
        PrintStarChristmasTree(height);
    }

    static void PrintNumberChristmasTree(int height)
    {
        for (int i = 0; i < height; i++)
        {
            // Отпечатване на водещите интервали
            Console.Write(new string(' ', (height - i - 1) * 2));

            // Лява част на числата
            for (int j = i; j > 0; j--)
            {
                Console.Write(j + " ");
            }

            // Централна нула
            Console.Write("0 ");

            // Дясна част на числата
            for (int j = 1; j <= i; j++)
            {
                Console.Write(j + " ");
            }

            Console.WriteLine();
        }
    }

    static void PrintStarChristmasTree(int height)
    {
        for (int i = 0; i < height; i++)
        {
            // Отпечатване на водещите интервали
            Console.Write(new string(' ', (height - i - 1) * 2));

            // Отпечатване на звездите
            for (int j = 0; j < i * 2 + 1; j++)
            {
                Console.Write("* ");
            }

            Console.WriteLine();
        }
    }
}
