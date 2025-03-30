while (true)
{
    Console.WriteLine("Въведете цяло положително число n: ");
    int n = int.Parse(Console.ReadLine());

   
    if (n > 0)
    {
        Console.WriteLine("Числата от 1 до n в прав ред:");
        for (int i = 1; i <= n; i++)
        {
            Console.Write(i + " ");
        }

        Console.WriteLine("\nЧислата от 1 до n в обратен ред:");
        for (int i = n; i >= 1; i--)
        {
            Console.Write(i + " ");
        }
        Console.WriteLine();
    }
    else
    {
        Console.WriteLine("Моля, въведете цяло положително число.");
    }
}

            