Console.WriteLine("Въведете цяло положително число n:");
int n = int.Parse(Console.ReadLine());

if (n >= 0)
{
    long factorial = CalculateFactorial(n);
    Console.WriteLine($"Факториелът на {n} е: {factorial}");
}
else
{
    Console.WriteLine("Моля, въведете цяло неотрицателно число.");
}


static long CalculateFactorial(int n)
{
    long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
