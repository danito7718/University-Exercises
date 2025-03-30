
            Console.WriteLine("Въведете дължината на първата страна:");
            double side1 = double.Parse(Console.ReadLine());

            Console.WriteLine("Въведете дължината на втората страна:");
            double side2 = double.Parse(Console.ReadLine());

            Console.WriteLine("Въведете дължината на третата страна:");
            double side3 = double.Parse(Console.ReadLine());

            if (IsTriangleValid(side1, side2, side3))
            {
                string triangleType = DetermineTriangleType(side1, side2, side3);
                Console.WriteLine($"Триъгълникът е {triangleType}.");
            }
            else
            {
                Console.WriteLine("Тези дължини не могат да формират триъгълник.");
            }

        static bool IsTriangleValid(double side1, double side2, double side3) // Проверяваме дали 1вата страна + втората страна е по-голяма от 3тата (т.е е триъгълник)
        {
            return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
        }

        static string DetermineTriangleType(double side1, double side2, double side3)
        {
            if (side1 == side2 && side2 == side3) // Ако 3те страни са равни то е равностранен
            {
                return "равностранен";
            }
            else if (side1 == side2 || side1 == side3 || side2 == side3)  // Ако 2те страни са равни то е равнобедрен
            {
                return "равнобедрен";
            }
            else  // Във всеки друг случай е разностранен (има 3 различни страни)
            {
                return "разностранен";
            }
        }
