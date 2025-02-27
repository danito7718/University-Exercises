


// Аритметични оператори
int a = 10;
int b = 5;

Console.WriteLine("Аритметични оператори:");
Console.WriteLine($"a = {a}, b = {b}");
Console.WriteLine($"Събиране: a + b = {a + b}");
Console.WriteLine($"Изваждане: a - b = {a - b}");
Console.WriteLine($"Умножение: a * b = {a * b}");
Console.WriteLine($"Деление: a / b = {a / b}");
Console.WriteLine($"Модул: a % b = {a % b}");
Console.WriteLine();

// Логически оператори
bool x = true;
bool y = false;

Console.WriteLine("Логически оператори:");
Console.WriteLine($"x = {x}, y = {y}");
Console.WriteLine($"AND (&&): x && y = {x && y}");
Console.WriteLine($"OR (||): x || y = {x || y}");
Console.WriteLine($"NOT (!): !x = {!x}");
Console.WriteLine();

// Побитови оператори
int m = 6;  // 0110 в двоична система
int n = 3;  // 0011 в двоична система

Console.WriteLine("Побитови оператори:");
Console.WriteLine($"m = {m} (0110), n = {n} (0011)");
Console.WriteLine($"AND (&): m & n = {m & n} (0010)");
Console.WriteLine($"OR (|): m | n = {m | n} (0111)");
Console.WriteLine($"XOR (^): m ^ n = {m ^ n} (0101)");
Console.WriteLine($"NOT (~): ~m = {~m} (11111111111111111111111111111001) - в двоичен код");
Console.WriteLine($"Ляво преместване (<<): m << 1 = {m << 1} (1100)");
Console.WriteLine($"Дясно преместване (>>): m >> 1 = {m >> 1} (0011)");

Console.WriteLine("Демонстрация завършена.");
