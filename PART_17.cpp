#include"FOR_ALL_TASKS.h"

//TASK 1

int main()
{
	srand(time(NULL));
	int number, sum = 0;
	for (int i = 0; i < 10; i++)
	{
		number = rand() % 10;
		sum += number;
	}
	cout << (double)sum / 10 << endl;
}

//TASK 2

void change(int* nums, int& maxi, int& mini)
{
	int t = nums[maxi];
	nums[maxi] = nums[mini];
	nums[mini] = t;
}
int main()
{
	srand(time(NULL));
	const int SIZE = 9;
	int arr[SIZE], max, min, index_max, index_min;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
		cout << arr[i] << "\t";
	}
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index_min = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			index_max = i;
		}
	}
	change(arr, index_max, index_min);
	cout << endl;
	for (int i = 0; i < SIZE; i++) cout << arr[i] << "\t";
}