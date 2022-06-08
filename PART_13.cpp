#include"FOR_ALL_TASKS.h"

//TASK 1

int main()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0 && i % 5 == 0)
		{
			cout << i << endl;
		}
	}
}

//TASK 2

int main()
{
	int max = 999999, count = 0;
	const int SIZE = 3;
	for (int i = 0; i < max; i++)
	{
		int ticket[SIZE];
		ticket[0] = i / 100000;
		ticket[1] = i / 10000 % 10;
		ticket[2] = i / 1000 % 10;
		if (ticket[0] + ticket[1] + ticket[2] == 13)
		{
			count++;
		}
	}
	cout << "Count of lucky tickets: " << count << endl;
}

//TASK 3

int main()
{
	srand(time(NULL));
	int count = 0, num;
	string orel = "Orel", reshka = "Reshka";
	ofstream fout("G:\\lol.txt");
	for (int i = 0; i < 100; i++)
	{
		num = rand() % 2;
		switch (num)
		{
		case 0:
		{
			fout << orel << endl;
			count++;
			break;
		}
		case 1:
			fout << reshka << endl;
			break;
		}
	}
	fout.close();
	cout << "Orel: " << count << endl;
	cout << "Reshka: " << (100 - count) << endl;
}