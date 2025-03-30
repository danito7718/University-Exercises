using System;
using System.Collections.Generic;

class Student
{
    // Полета на класа
    private string firstName;
    private string middleName;
    private string lastName;
    private string facultyNumber;
    private string specialty;

    // Метод за въвеждане на стойности
    public void InputValues()
    {
        Console.Write("Въведете първо име: ");
        firstName = Console.ReadLine();

        Console.Write("Въведете презиме: ");
        middleName = Console.ReadLine();

        Console.Write("Въведете фамилия: ");
        lastName = Console.ReadLine();

        Console.Write("Въведете факултетен номер: ");
        facultyNumber = Console.ReadLine();

        Console.Write("Въведете специалност: ");
        specialty = Console.ReadLine();
    }

    // Метод за извеждане на стойности
    public void DisplayValues()
    {
        Console.WriteLine($"Име: {firstName} {middleName} {lastName}");
        Console.WriteLine($"Факултетен номер: {facultyNumber}");
        Console.WriteLine($"Специалност: {specialty}");
    }

    // Метод за извеждане на имената на студент по факултетен номер
    public bool DisplayNameByFacultyNumber(string inputFacultyNumber)
    {
        if (facultyNumber == inputFacultyNumber)
        {
            Console.WriteLine($"Студент: {firstName} {middleName} {lastName}");
            return true;
        }
        return false;
    }
}

class Program
{
    static void Main(string[] args)
    {
        // Създаване на списък от студенти
        List<Student> students = new List<Student>();

        Console.Write("Колко студента искате да въведете? ");
        int studentCount = int.Parse(Console.ReadLine());

        // Въвеждане на данни за студентите
        for (int i = 0; i < studentCount; i++)
        {
            Console.WriteLine($"\nВъвеждане на данни за студент {i + 1}:");
            Student student = new Student();
            student.InputValues();
            students.Add(student);
        }

        // Търсене на студент по факултетен номер
        Console.Write("\nВъведете факултетен номер за търсене: ");
        string searchFacultyNumber = Console.ReadLine();

        bool found = false;
        foreach (var student in students)
        {
            if (student.DisplayNameByFacultyNumber(searchFacultyNumber))
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            Console.WriteLine("Студент с такъв факултетен номер не беше намерен.");
        }

        // Извеждане на всички данни (по желание)
        Console.WriteLine("\nДанни за всички студенти:");
        foreach (var student in students)
        {
            student.DisplayValues();
            Console.WriteLine();
        }
    }
}
