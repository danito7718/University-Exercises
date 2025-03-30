Console.WriteLine($"Въведи големината на масива:");
int n = int.Parse(Console.ReadLine());
double[] array = new double[n];
for (int i = 0; i < n; i++)
{
    Console.WriteLine($"Въведете елемент за {i} индекс:");
    array[i] = double.Parse(Console.ReadLine());
}

Console.WriteLine($"Елементите от масива в прав ред:");
foreach (var item in array)
{
    Console.Write(item + " ");
}
Console.WriteLine();
Console.WriteLine("Елементите от масива в обратен ред:");
for (int i = n - 1; i >= 0; i--)
{
    Console.Write($"{array[i]} ");
}
Console.WriteLine();
Console.WriteLine("Елеменитет от масива с четен индекс.");
for (int i = 0; n >= i; i += 2)
{
    Console.Write($"{array[i]} ");
}
Console.WriteLine();
Console.WriteLine("Елеменитет от масива с нечетен индекс.");
for (int i = 1; n > i; i += 2)
{
    Console.Write($"{array[i]} ");
}

