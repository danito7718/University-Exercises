
string[,] months = { {"Jan", "Feb", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" },{"31", "28", "31", "30", "31", "30", "31", "31", "30", "31", "30", "31" } };

for (int i = 0; i < 12; i++)
{
    Console.WriteLine($"{months[0,i]} has {months[1,i]} days");
}




/*JAN - 31
  Feb - 28
  March - 31
  April - 30
  May - 31
  June - 30
  July - 31
  August - 31
  September - 30
  October - 31
  November - 30
  December - 31
*/
