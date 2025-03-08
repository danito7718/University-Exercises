Console.WriteLine("Въведете големината на масива:");
int n = int.Parse(Console.ReadLine());
int index = 0;
int[] array = new int[n];
int posCounter = 0;
for (int i = 0; i < n; i++)
{
    Console.WriteLine($"Въведете елемент за масива с индекс {i}");
    array[i] = int.Parse(Console.ReadLine());
    if (array[i] >= 0)
    {
        posCounter++;
    }
}
int[] posArray = new int[posCounter];
Console.WriteLine();
for (int i = 0;i < n; i++)
{
    if (array[i] >= 0)
    {
        posArray[index] = array[i];
        index++;
    }
}
Console.WriteLine("Масивът с позитивни елементи:");
foreach (var item in posArray)
{
    Console.WriteLine(item);
}
Console.WriteLine();
Console.WriteLine("Оригиналният масив:");
foreach (var item in array)
{
    Console.WriteLine(item);
}
