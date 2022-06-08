#include"FOR_ALL_TASKS.h"

//TASK 1

double convert(double* n)
{
	(*n) *= 0.453;
	return *n;
}
int main()
{
	double weight;
	cin >> weight;
	cout << convert(&weight);
}

//TASK 2

int main()
{
	int stipendia;
	double taxes, all = 0;
	cin >> stipendia;
	cin >> taxes;
	for (int i = 0; i < 10; i++)
	{
		taxes += (taxes * 0.3);
		all += taxes;
	}
	cout << all + stipendia << endl;
}

//TASK 3

int main()
{
	const int SIZE = 3;
	int pass[SIZE];
	int check[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> pass[i];
	}
	for (int i = 0; i < 10; i++)
	{
		check[0] = i;
		if (check[0] == pass[0])
		{
			cout << check[0];
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		check[1] = i;
		if (check[1] == pass[1])
		{
			cout << check[1];
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		check[2] = i;
		if (check[2] == pass[2])
		{
			cout << check[2];
			break;
		}
	}
}