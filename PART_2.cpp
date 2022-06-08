#include"FOR_ALL_TASKS.h"

//TASK 3

void forarr(int* nums, int num)
{
	nums[0] = num / 100; nums[1] = num % 100 / 10; nums[2] = num % 100 % 10;
	if (!nums[0])
	{
		int t = nums[1];
		nums[0] = nums[1];
		nums[1] = t;
	}
}
int forrand(int* random)
{
	int r_number;
	r_number = rand() % 999;
	random[0] = r_number / 100; random[1] = r_number % 100 / 10; random[2] = r_number % 100 % 10;
	if (!random[0])
	{
		int t = random[1];
		random[0] = random[1];
		random[1] = t;
	}
	return r_number;
}
int main()
{
	srand(time(NULL));
	const int SIZE = 4;
	int gen[SIZE], enter[SIZE], * pgen, * pent, number, r_number, count, right_place;
	gen[3] = enter[3] = 10;
	pgen = gen; pent = enter;
	r_number = forrand(gen);
	cin >> number;
	while (number != r_number)
	{
		int j = 0;
		count = right_place = 0;
		cin >> number;
		forarr(enter, number);
		if (number == r_number)
		{
			cout << "You're guess number!!!" << endl;
			break;
		}
		for (int i = 0; pgen[i] != 10; i++)
		{
			if (pent[i] == pgen[i])
			{
				right_place++;
			}
			else
			{
				switch (i)
				{
				case 0:
				{
					if (pent[i] == pgen[1] || pent[i] == pgen[2]) count++;
					break;
				}
				case 1:
				{
					if (pent[i] == pgen[0] || pent[i] == pgen[2])count++;
					break;
				}
				case 2:
				{
					if (pent[i] == pgen[0] || pent[i] == pgen[1])count++;
					break;
				}
				}
			}
		}
		if (right_place||count)
		{
			cout << "Right Numbers at right position: " << right_place << endl;
			cout << "Right Numbers at wrong position " << count << endl;
		}
		else cout << "All numbers wrong!!!" << endl;
	}
}


