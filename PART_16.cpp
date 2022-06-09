#include"FOR_ALL_TASKS.h"

//TASK 1

int main()
{
	const int SIZE = 10;
	int numb[SIZE], min, * pn; pn = numb;
	for (int i = 0; i < SIZE; i++)cin >> numb[i];
	min = numb[0];
	for (int i = 0; pn[i] != pn[SIZE - 1]; i++)
	{
		if (pn[i] < min)min = pn[i];
	}
	cout << min << endl;
}

//TASK 2

int main()
{
	char s1[80];
	gets_s(s1);
	s1[0] = ' ';
	s1[strlen(s1) - 1] = '.';
	cout << s1 << endl;
}

//TASK 3

void arr(int arr[][105])
{
	srand(time(NULL));
	int grade;
	for (int j = 0; j < 40; j++)
	{
		for (int i = 0; i < 105; i++)
		{
			grade = 3 + rand() % 3;
			arr[j][i] = grade;
		}
	}
}
int main()
{
	const int COUNT_STUD = 40, GRADES = 105, COUNT_DAYS = 1;
	int students[COUNT_STUD][GRADES], periods[COUNT_STUD][COUNT_DAYS], grade, max_days, best_student = 0, period = 0;
	arr(students);
	for (int j = 0; j < COUNT_STUD; j++)
	{
		for (int i = 0; i < GRADES; i++)
		{
			if (students[j][i] >= 4)
			{
				period++;
				periods[j][0] = period;
			}
			else if (students[j][i] < 4)
			{
				if (periods[j][0] < period) periods[j][0] = period;
				period = 0;
			}
		}
		period = 0;
	}
	max_days = periods[0][0];
	for (int i = 0; i < COUNT_STUD; i++)
	{
		if (periods[i][0] > max_days)
		{
			max_days = periods[i][0];
			best_student = i;
		}
	}
	cout << "Best student at number " << best_student << endl;
}