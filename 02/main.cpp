#include "AoC.hpp"
using namespace std;

int CalculateOutput(int noun, int verb)
{
	string s;
	vector<int> data;

	ifstream file("../02/input.txt");

	getline(file, s);

	istringstream ss(s);

	while (!ss.eof())
	{
		int x = 0;
		string str;

		getline(ss, str, ',');

		data.push_back(stoi(str));
	}

	// change values of noun and verbs
	data[1] = noun;
	data[2] = verb;

	// interate over vector
	for (int i = 0; i < data.size(); i += 4)
	{
		int pos0 = data.at(i);

		if (pos0 == 99)
		{
			break;
		}

		int pos1 = data.at(i + 1);
		int pos2 = data.at(i + 2);
		int pos3 = data.at(i + 3);

		// Add
		if (pos0 == 1)
		{
			data[pos3] = data.at(pos1) + data.at(pos2);
		}
		// Multiply
		else if (pos0 == 2)
		{
			data[pos3] = data.at(pos1) * data.at(pos2);
		}
	}

	return data.at(0);
}

void PartA()
{
	cout << CalculateOutput(12,2) << endl;
}

void PartB()
{
	int value = 19690720;
	int n = 0;
	int v = 0;

	for (n = 0; n <= 100; n++)
	{
		for (v = 0; v <= 100; v++)
		{
			if (CalculateOutput(n, v) == value)
			{
				cout << "Noun: " << n << " Verb: " << v << " Answer: " << n << v << endl;
			}
		}
	}
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