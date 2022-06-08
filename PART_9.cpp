#include"FOR_ALL_TASKS.h"

//TASK 1

bool check(int* n)
{
	if (*n % 4 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year, result;
	cin >> year;
	result = check(&year);
	switch (result)
	{
	case 1:
	{
		cout << "YEAR IS VISOKOSNY";
		break;
	}
	case 0:
	{
		cout << "YEAR IS NOT VISOKOSNY";
		break;
	}
	default:
	{
		cout << "YOU ARE IDIOT";
		break;
	}
	}
}

//TASK 2

int main()
{
	int fourth;
	const int SIZE = 4;
	int four[SIZE];
	cin >> fourth;
	four[0] = fourth / 1000;
	four[1] = fourth % 1000 / 100;
	four[2] = fourth % 1000 % 100 / 10;
	four[3] = fourth % 1000 % 100 % 10;
	if (four[0] == four[3] && four[1] == four[2])
	{
		cout << "IT IS PALINDROM";
	}
	else if (four[0] == four[1] == four[2] == four[3])
	{
		cout << "IT IS PALINDROM";
	}
	else
	{
		cout << "IT IS NOT PALIDROM";
	}

}

//TASK 3

int check(int* n, int c)
{
	int temp = 0;
	for (int i = 0; i < c; i++)
	{
		temp += n[i];
	}
	return temp;
}
int main()
{
	srand(time(NULL));
	const int SIZE = 3;
	int gamearr[SIZE];
	int num, sizegame, choice;
	choice = rand() % 5;
	sizegame = sizeof(gamearr) / sizeof(gamearr[0]);
	int set1[SIZE]{ 6,7,8 };
	int set2[SIZE]{ 7,8,9 };
	int set3[SIZE]{ 6,9,10 };
	int set4[SIZE]{ 6,9,8 };
	int set5[SIZE]{ 7,6,10 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << "YOUR NUMBER" << "\t";
		cin >> num;
		gamearr[i] = num;
	}
	switch (choice)
	{
	case 1:
	{
		if (check(set1, sizegame) > check(gamearr, sizegame))
		{
			cout << "LOSS";
		}
		else if (check(set1, sizegame) > check(gamearr, sizegame))
		{
			cout << "WIN";
		}
		else
		{
			cout << "TIE";
		}
		break;
	}
	case 2:
	{
		if (check(set2, sizegame) > check(gamearr, sizegame))
		{
			cout << "LOSS";
		}
		else if (check(set2, sizegame) < check(gamearr, sizegame))
		{
			cout << "WIN";
		}
		else
		{
			cout << "TIE";
		}
		break;
	}
	case 3:
	{
		if (check(set3, sizegame) > check(gamearr, sizegame))
		{
			cout << "LOSS";
		}
		else if (check(set3, sizegame) < check(gamearr, sizegame))
		{
			cout << "WIN";
		}
		else
		{
			cout << "TIE";
		}
		break;
	}
	case 4:
	{
		if (check(set4, sizegame) > check(gamearr, sizegame))
		{
			cout << "LOSS";
		}
		else if (check(set4, sizegame) < check(gamearr, sizegame))
		{
			cout << "WIN";
		}
		else
		{
			cout << "TIE";
		}
		break;
	}
	case 5:
	{
		if (check(set5, sizegame) > check(gamearr, sizegame))
		{
			cout << "LOSS";
		}
		else if (check(set5, sizegame) < check(gamearr, sizegame))
		{
			cout << "WIN";
		}
		else
		{
			cout << "TIE";
		}
		break;
	}
	}
}