#include <iostream>
using namespace std;

int main()
{
	int integer_rounds = 1,//Holds rounds of integers
		integer,// Holds the integers
		total = 0; // Holds total of integers
	const int SENTINEL = 0;//Sentinel value
	int	even_count = 0; // Holds even count
	int	odd_count = 0; //Holds odd count

	cout << "Enter integer values.\n";
	cout << "When finished enter 0.\n\n";
	cout << "Enter integer " << integer_rounds << ": ";
	cin >> integer;

	while (integer != SENTINEL)
	{
		total += integer;
		integer_rounds++;
		cout << "Enter integer " << integer_rounds << ": ";
		cin >> integer;

		if (integer < 0)
		{
		cout << "Negative numbers not accepted.\n";
		}

		else if (integer % 2 == 0)
		
			odd_count++;
			else
		
				even_count++;
		
		
	}
	cout << "You had " << even_count << " even numbers and " << odd_count << " odd numbers.";

	return 0;
}