#include "AoC.hpp"
using namespace std;

int calculateFuel(int f)
{
	int fuel = f / 3 - 2;
	
	if (fuel <= 0)
	{
		return 0;
	}

	return fuel + calculateFuel(fuel);
}

void PartA()
{
	ifstream file("../01/input.txt");

	int x = 0;
	int total = 0;

	while (file >> x)
	{
		total += floor(x / 3) - 2;
	}

	cout << "Total is:" << total << endl;
}

void PartB()
{
	ifstream file("../01/input.txt");

	int total = 0;
	int x = 0;

	while (file >> x)
	{
		total += calculateFuel(x);
	}

	cout << "Total is:" << total << endl;
}

int main()
{
	int part;
	bool corInput = false;

	while (!corInput)
	{
		cout << "Part 1 or 2 (input 1 or 2)?" << endl;
		cin >> part;
		if (part == 1)
		{
			PartA();
			corInput = true;
		}
		else if (part == 2)
		{
			PartB();
			corInput = true;
		}
		else
		{
			cout << "Input only 1 or 2!" << endl;
		}
	}

	return 0;
}