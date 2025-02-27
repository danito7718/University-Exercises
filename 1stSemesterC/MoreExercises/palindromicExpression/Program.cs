
string input = Console.ReadLine();
char[] temp = new char[input.Length];

int index = 0;

for (int i = 0; i < input.Length; i++) 
{ 
    if (char.IsLetterOrDigit(input[i])) 
    { 
        temp[index] = char.ToLower(input[i]);
        index++;
    }   
}

string cleanedInput = new string(temp, 0, index);

bool isPalindrome = cleanedInput.SequenceEqual(cleanedInput.Reverse());

if (isPalindrome)
{
    Console.WriteLine("ДА");
}
else
{
    Console.WriteLine("НЕ");
}