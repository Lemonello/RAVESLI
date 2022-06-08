#include"FOR_ALL_TASKS.h"

// TASK 1

int main()
{

}

//Task 2
int main()
{
	int count, number;
	cin >> count;
	int* arr = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> number;
		arr[i] = number;
	}
	sort(arr, arr + count);
	for (int i = 0; i < count; i++)
	{
		if (arr[i] < 0)
		{
			cout << "There are number less than zero!!!";
		}
	}
	cout << arr[0] << "\t" << "It is minimal number";
}

//TASK 3

int main()
{
int month;
	cin >> month;
	if (month==12||month==1||month==2)
	{
		cout << "Winter!!!";
	}
	else if (month==3||month==4||month==5)
	{
		cout << "Spring!!!";
	}
	else if (month == 6 ||month== 7 ||month== 8)
	{
		cout << "Summer!!!";
	}
	else
	{
		cout << "Autumn!!!";
	}
}