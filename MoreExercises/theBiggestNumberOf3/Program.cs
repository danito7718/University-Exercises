





Console.Write("Въведете 3 числа: ");
string input = Console.ReadLine();

string[] numbers = input.Split(' ');
int a = int.Parse(numbers[0]);
int b = int.Parse(numbers[1]);
int c = int.Parse(numbers[2]);

int maxAB = (a + b + Math.Abs(a - b)) / 2;
int max = (maxAB+ c + Math.Abs(maxAB-c)) / 2;

Console.WriteLine($"Най-голямото число е: {max}");