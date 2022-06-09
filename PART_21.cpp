#include"FOR_ALL_TASKS.h"

//TASK 3

enum Levels { EASY = 1, MEDIUM, HARD };
int main()
{
	srand(time(NULL));
	char qq = 0, pass[40];
	int choice, symb, count;
	cout << "1.Easy" << endl << "2.Medium" << endl << "3.Hard" << endl;
	cin >> choice;
	switch (choice)
	{
	case EASY:
	{
		count = rand() % 10;
		for (int i = 0; i < count; i++)
		{
			qq = rand() % 3;
			switch (qq)
			{
			case 1:
			{
				qq = 48 + rand() % 9;
				pass[i] = qq;
				break;
			}
			case 2:
			{
				qq = 65 + rand() % 26;
				pass[i] = qq;
				break;
			}
			case 3:
			{
				qq = 97 + rand() % 26;
				break;
			}
			}
		}
		cout << pass << endl;
		break;
	}
	case MEDIUM:
	{
		count = rand() % 20;
		for (int i = 0; i < count; i++)
		{
			qq = 32 + rand() % 96;
			pass[i] = qq;
		}
		cout << pass << endl;
		break;
	}
	case HARD:
	{
		count = rand() % 30;
		for (int i = 0; i < count; i++)
		{
			qq = 32 + rand() % 96;
			pass[i] = qq;
		}
		cout << pass << endl;
		break;
	}
	}
}