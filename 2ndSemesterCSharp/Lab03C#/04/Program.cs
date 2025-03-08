Dictionary<string, int> weatherData =  new Dictionary<string, int>
{
    {"Ново село", 8 },
    { "Видин", 8},
    { "Лом", 8},
    { "Оряхово", 8},
    { "Монтана", 15},
    { "Враца", 14},
    { "Кнежа", 8},
    { "Ловеч", 10},
    { "Плевен", 13},
};   // Създаваме речник и вкарваме стойностите които знаем предварително!

// Създаваме 2 променливи с най-малък и с най-голям размер, за да сравним по-късно и да намерим желаните стойности.
int lowestTemperature = int.MaxValue; 
int highestTemperature = int.MinValue;
List<string> coldestStations = new List<string>();
List<string> hottestStations = new List<string>();

foreach (var item in weatherData) // Четем данните от речника и ги записваме в листа.
{
    if (item.Value < lowestTemperature) //четем entry.Value от 1вия елемент на речника
    {
        lowestTemperature = item.Value; // Добавяме Value(стойността на текущия елемент в речника) към листа
        coldestStations.Clear(); // Премахваме информацията от листа ако имаме промяна (нова по-висока температура)!
        coldestStations.Add(item.Key); //Добавяме key(string) към листа
    }
    else if (item.Value == lowestTemperature)
        coldestStations.Add(item.Key); // Ако имаме еднаква температура добавяме я към съществуващия лист
    

    if (item.Value > highestTemperature) //четем item.Value от 1вия елемент на речника
    {
        highestTemperature = item.Value;
        hottestStations.Clear();
        hottestStations.Add(item.Key);
    }
    else if (item.Value == highestTemperature) // Ако имаме еднаква температура добавяме я към съществуващия лист с най-високи температури
        hottestStations.Add(item.Key);
}

int temperatureDifference = highestTemperature - lowestTemperature; // намираме разликата в температурата

if (coldestStations.Count > 1) // ако имаме повече от 1 най-студена станция, пишем (станциите)
    Console.WriteLine($"Най-ниската измерена температура е: {lowestTemperature}°C, в станциите: {string.Join(", ", coldestStations)}");
else
    Console.WriteLine($"Най-ниската измерена температура е: {lowestTemperature}°C, в станцията: {coldestStations[0]}");

if (hottestStations.Count > 1) //...
    Console.WriteLine($"Най-високата измерена температура е: {highestTemperature}°C, в станциите: {string.Join(", ", hottestStations)}");
else 
    Console.WriteLine($"Най-високата измерена температура е: {highestTemperature}°C, в станцията: {hottestStations[0]}");

Console.WriteLine($"\nТемпературната разлика е: {temperatureDifference}°C");