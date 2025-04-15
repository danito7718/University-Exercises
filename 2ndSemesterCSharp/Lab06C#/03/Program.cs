using System;

class Student
{
    string fullName;
    string facultyNumber;
    string specialty;
    int course;

    public Student(string fullName, string facultyNumber, string specialty, int course)
    {
        this.fullName = fullName;
        this.facultyNumber = facultyNumber;
        this.specialty = specialty;
        this.course = course;
    }
    public string GetStudentInfo()
    {
        return $"Име: {fullName}\nФакултетен номер: {facultyNumber}\nСпециалност: {specialty}\nКурс: {course}";
    }
}

class Program
{
    static void Main(string[] args)
    {
       
        Student student = new Student("Иван Иванов Петров", "22472126", "Информатика", 3);

        // Output
        Console.WriteLine(student.GetStudentInfo());
    }
}
