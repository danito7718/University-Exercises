int startHour = int.Parse(Console.ReadLine());

int startMinute = int.Parse(Console.ReadLine());

int endHour = int.Parse(Console.ReadLine());

int endMinute = int.Parse(Console.ReadLine());

int startTimeInMinutes = (startHour * 60) + startMinute;
int endTimeInMinutes = (endHour * 60) + endMinute;

int durationInMinutes;

if (endTimeInMinutes >= startTimeInMinutes)
{
    durationInMinutes = endTimeInMinutes - startTimeInMinutes;
}
else
{
    durationInMinutes = ((24 * 60 - startTimeInMinutes) + endTimeInMinutes);
}

int durationInHours = durationInMinutes / 60;
int minutesDuration = durationInMinutes % 60;

Console.WriteLine($"Играта продължи {durationInHours} часа и {minutesDuration} минути.");

