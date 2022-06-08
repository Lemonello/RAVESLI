#include"FOR_ALL_TASKS.h"

//TASK 1

int main()
{
	double average, number, count = 0;
	int i = 0, all;
	cin >> all;
	while (i < all)
	{
		cin >> number;
		count += number;
		i++;
	}
	average = count / i;
	cout << average << endl;
}

//TASK 2

int main()
{
	const int SIZE = 6;
	int number;
	cin >> number;
	int arr[SIZE];
	arr[0] = number / 100000;
	arr[1] = number % 100000 / 10000;
	arr[2] = number / 1000 % 10;
	arr[3] = number % 1000 / 100;
	arr[4] = number % 100 / 10;
	arr[5] = number % 10;
	if (arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5])
	{
		cout << "Lucky!!!" << endl;
	}
	else
	{
		cout << "Out of luck." << endl;
	}
}

//TASK 3

const int SIZE = 5, COUNT = 10, NAM = 80;
struct Student
{
	char* name;
	int year, * rating;
	Student() {}
	Student(char* n, int y, int* r)// Попробовать заменить строку массивом символов
	{
		name = n; year = y; rating = r;
	}
	double get_av_st(int* r)
	{
		double average_st = 0;
		for (int i = 0; i < SIZE; i++)
		{
			average_st += r[i];
		}
		return average_st / 5;
	}
	char get_first(char* arr) { return arr[0]; }
	friend void show_st(Student* arr);
	friend void input_data(Student* arr);
	friend void sort_st(Student* arr, int c); //c=COUNT;
	friend double get_average(Student* arr, int c);
	friend void best_st(Student* arr, int c);
};
double get_average(Student* arr, int c)
{
	double average = 0;
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			average += arr[i].rating[j];
		}
	}
	return average / COUNT;
}
void show_st(Student* arr)
{
	for (int i = 0; i < COUNT; i++)
	{
		cout << arr[i].name << endl;
		cout << arr[i].year << endl;
		for (int j = 0; j < SIZE; j++)
		{
			cout << arr[i].rating[j] << "\t";
		}
		cout << endl;
	}
}
void input_data(Student* arr)
{
	char nam[80]; int y, rate[SIZE];
	for (int j = 0; j < COUNT; j++)
	{
		cout << "Enter year and name: " << endl;
		cin >> y >> nam;
		cout << "Enter the marks: " << endl;
		for (int i = 0; i < SIZE; i++)
		{
			cin >> rate[i];
		}
		Student t1(nam, y, rate);
		arr[j] = t1;
	}
}
void sort_st(Student* arr, int c)
{
	Student ob;
	for (int i = 1; i < c; i++)
	{
		for (int j = c - 1; j >= i; j--)
		{
			if (arr[j - 1].get_first(arr[j - 1].name) > arr[j].get_first(arr[j].name))
			{
				ob = arr[j - 1];
				arr[j] = arr[j - 1];
				arr[j - 1] = ob;
			}
		}
	}
}
void best_st(Student* arr, int c)
{
	int IS_THERE = 0;
	for (int i = 0; i < c; i++)
	{
		if (arr[i].get_av_st(arr[i].rating) > get_average(arr, c))
		{
			cout << arr[i].name << arr[i].year << arr[i].rating;
			IS_THERE++;
		}
		if (!IS_THERE)cout << "There isn't best student" << endl;
	}
}
int main()
{
	Student STUD[COUNT];
	input_data(STUD);
	sort_st(STUD, COUNT);
	best_st(STUD, COUNT);
}