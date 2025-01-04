
Console.WriteLine("Въведете името на работника:");
string name = Console.ReadLine();

Console.WriteLine("Въведете заплатата на работника:");
double salary = 0;
salary = double.Parse(Console.ReadLine());

Console.WriteLine("Въведете месечния оборот:");
double salesValue = 0;
salesValue = double.Parse(Console.ReadLine());

double bonus = (salesValue * 0.15);
Console.WriteLine($"Общо: {(salary + bonus):f2}");

