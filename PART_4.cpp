#include"FOR_ALL_TASKS.h"

//TASK 1

int main()
{
	int versta;
	cout << "Enter count of verst: ";
	cin >> versta;
	cout << "Kilometres: " << versta * 1.0668;
}

//TASK 2

int main()
{
	int count;
	double average, min = INT_MAX, number, max = 0, temp = 0;
	cout << "Count: ";
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> number;
		temp += number;
		max = max(max, number);
		min = min(min, number);
	}
	average = temp / count;
	cout << average << "\t" << temp << endl;
	cout << min << "\t" << max;
}

//TASK 3
 
int main()
{
	int l1, l2, finl, i, number;
	int min = INT_MAX, max = 0;
	cin >> l1;
	cin >> l2;
	finl = l1 + l2;
	int* firstarr = new int[l1];
	int* secondarr = new int[l2];
	int* finalarr = new int[finl];
	for (i = 0; i < l1; i++)
	{
		cin >> number;
		firstarr[i] = number;
		finalarr[i] = number;
	}
	for (int j = 0; j < l2; j++)
	{
		cin >> number;
		secondarr[j] = number;
		finalarr[i++] = number;
	}
	i -= 1;
	sort(finalarr, finalarr + finl);
	for (int* ptr = finalarr; ptr <= &finalarr[i]; ptr++)
	{
		cout << *ptr << endl;
	}
	delete firstarr;
	delete secondarr;
	delete finalarr;
}