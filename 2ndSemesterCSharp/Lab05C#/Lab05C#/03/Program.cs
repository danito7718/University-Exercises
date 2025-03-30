using System;

class ComplexNumber
{
    private double real;
    private double imag;

    // Конструктор по подразбиране
    public ComplexNumber()
    {
        real = 0;
        imag = 0;
    }

    // Конструктор с параметри
    public ComplexNumber(double real, double imag)
    {
        this.real = real;
        this.imag = imag;
    }

    // Метод за въвеждане на комплексно число от клавиатурата
    public void InputFromConsole()
    {
        Console.Write("Въведете реална част: ");
        real = double.Parse(Console.ReadLine());
        Console.Write("Въведете имагинерна част: ");
        imag = double.Parse(Console.ReadLine());
    }

    // Метод за извеждане на комплексното число
    public void Display()
    {
        Console.WriteLine($"{real} + j{imag}");
    }

    // Метод на екземпляр за намиране на сумата на две комплексни числа
    public ComplexNumber Add(ComplexNumber other)
    {
        return new ComplexNumber(this.real + other.real, this.imag + other.imag);
    }

    // Статичен метод за намиране на сумата на две комплексни числа
    public static ComplexNumber Add(ComplexNumber c1, ComplexNumber c2)
    {
        return new ComplexNumber(c1.real + c2.real, c1.imag + c2.imag);
    }
}

class Program
{
    static void Main()
    {
        // Създаване на два обекта за комплексни числа
        ComplexNumber num1 = new ComplexNumber();
        ComplexNumber num2 = new ComplexNumber();

        // Въвеждане на стойности
        Console.WriteLine("Въведете първото комплексно число:");
        num1.InputFromConsole();

        Console.WriteLine("Въведете второто комплексно число:");
        num2.InputFromConsole();

        // Извеждане на комплексните числа
        Console.WriteLine("\nВъведените комплексни числа са:");
        Console.Write("Число 1: ");
        num1.Display();
        Console.Write("Число 2: ");
        num2.Display();

        // Сума като метод на екземпляр
        ComplexNumber sumInstance = num1.Add(num2);
        Console.WriteLine("\nСумата (използвайки метод на екземпляр):");
        sumInstance.Display();

        // Сума като статичен метод
        ComplexNumber sumStatic = ComplexNumber.Add(num1, num2);
        Console.WriteLine("Сумата (използвайки статичен метод):");
        sumStatic.Display();
    }
}
