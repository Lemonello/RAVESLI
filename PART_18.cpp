#include"FOR_ALL_TASKS.h"

//TASK 1

int main()
{
	double price_of_kg, kg;
	cin >> price_of_kg >> kg;
	cout << kg * price_of_kg << endl;
}

//TASK 2

int main()
{
	const int SIZE = 10;
	int arr[SIZE], already_is_there, count = 0;
	register int i = 0;
	for (; i < SIZE; i++)cin >> arr[i];
	i = 0;
	for (; i < SIZE; i++)
	{
		count = 0;
		already_is_there = arr[i];
		for (int j = 0; j < SIZE; j++)
		{
			if (already_is_there == arr[j])count++;
			if (count > 2)
			{
				for (int z = 0; z < SIZE; z++)
				{
					if (arr[z] == already_is_there)arr[z] = 0;
				}
			}
		}
	}
	cout << endl;
	for (int a = 0; a < SIZE; a++)cout << arr[a] << "\t";
}

//TASK 3

const int COUNT_TR = 18, PLACES = 36;
int count_places(int arr[][PLACES], int number)
{
	int counter = 0;
	for (int i = 0; i < PLACES; i++)
	{
		arr[number][i] ? counter = counter : counter++;
	}
	return counter;
}
int main()
{
	srand(time(NULL));
	int train[COUNT_TR][PLACES], number_of_tr;
	for (int i = 0; i < COUNT_TR; i++)
	{
		for (int j = 0; j < PLACES; j++)train[i][j] = rand() % 2;
	}
	cin >> number_of_tr;
	cout << endl;
	cout << count_places(train, number_of_tr) << endl;
}