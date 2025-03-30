
        static (double x1, double x2, double discriminant) FindRoots(double a, double b, double c)
        {
            double discriminant = (b * b) - (4 * a * c);
            double x1 = (-b + Math.Sqrt(discriminant)) / (2 * a);
            double x2 = (-b - Math.Sqrt(discriminant)) / (2 * a);
            return (x1,x2, discriminant);
        }
        static void Main(string[] args)
        {


            Console.WriteLine("Въведете коефициент a:");
            double a = double.Parse(Console.ReadLine());

            Console.WriteLine("Въведете коефициент b:");
            double b = double.Parse(Console.ReadLine());

            Console.WriteLine("Въведете коефициент c:");
            double c = double.Parse(Console.ReadLine());


            var (x1, x2, discriminant) = FindRoots(a, b, c);    
            
            if (discriminant> 0)
            {
                Console.WriteLine($"Има два реални корена: x1 = {x1}, x2 = {x2}");
                Console.WriteLine($"С дискриминанта: {discriminant}");
            }
            else if (discriminant == 0)
            {
                Console.WriteLine($"Има един реален корен: x1 = x2 = {x1}");
                Console.WriteLine($"С дискриминанта: {discriminant}");
            }
            else
            {
                Console.WriteLine("Няма реални корени.");
                Console.WriteLine($"Дискриминанта: {discriminant}");
            }
            
        }
