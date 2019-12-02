#include "AoC.hpp"
using namespace std;

void PartA()
{

}

void PartB()
{

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