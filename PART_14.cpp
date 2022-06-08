#include"FOR_ALL_TASKS.h"

//TASK 1

int count(int n)
{
	if (n > 0)
	{
		n *= 2 * (count(n - 1));
	}
	else if (n == 0)
	{
		return 1;
	}
}
int main()
{
	int a;
	cin >> a;
	cout << count(a) - 1 << endl;
}

//TASK 2

int convert(int h, int m, int s)
{
	return h * 3600 + m * 60 + s;
}
int main()
{
	int hours, min, sec, result;
	cin >> hours;
	cin >> min;
	cin >> sec;
	result = convert(hours, min, sec);
	cout << result << endl;
}

//TASK 3

int main()
{
	srand(time(NULL));
	int number, count;
	cin >> count;
	ofstream fout("G:\\lol.txt");
	while (count)
	{
		count--;
		number = rand() % 72;
		fout << number << endl;
	}
	fout.close();
	ifstream fin("G:\\lol.txt");
	number = 0;
	while (fin)
	{
		fin >> number;
		cout << number;
		for (int i = 0; i < number; i++) cout << "*";
		cout << endl;
	}
}