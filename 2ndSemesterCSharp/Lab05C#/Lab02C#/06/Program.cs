
double sum = 0;

while (true)
{
    Console.WriteLine("Въведете положително число (или 0 за край):");
    double number = double.Parse(Console.ReadLine());

    if (number == 0)
    {
        break; // Прекратяване на цикъла при въвеждане на 0
    }

    if (number > 0)
    {
        sum += number; // Добавяне на числото към сумата
    }
    else
    {
        Console.WriteLine("Моля, въведете положително число.");
    }
}

Console.WriteLine($"Сумата на въведените числа е: {sum}");
