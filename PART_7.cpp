#include"FOR_ALL_TASKS.h"

//TASK 2

int main()
{
	int count = 0;
	char s1[20];
	cin >> s1;
	for (int i = 0; s1[i]; i++)
	{
		if (s1[i] == '.')
		{
			count++;
		}
	}
	if (count)cout << "This number double or float" << endl;
	else cout << "This number integer" << endl;
}

//TASK 3

class Student
{
	double math = 0, phys = 0, inf = 0, average = 0;
	string name, familia, otchestvo;
public:
	friend void read_data(Student* arr);
	friend void sort_st(Student* arr);
	friend void show_st(Student* arr);
	friend ostream& operator<<(ostream& stream, Student ob);
	friend ifstream& operator>>(ifstream& stream, Student& ob);
};
ifstream& operator>>(ifstream& stream, Student& ob)
{
	stream >> ob.name >> ob.familia >> ob.otchestvo >> ob.math >> ob.inf >> ob.phys;
	return stream;
}
ostream& operator<<(ostream& stream, Student ob)
{
	stream << ob.name << "\t" << ob.familia << "\t" << ob.otchestvo << "\t";
	stream << ob.math << "\t" << ob.inf << "\t" << ob.phys << "\t" << ob.average << endl;
	return stream;
}
void read_data(Student* arr)
{
	Student st;
	ifstream fin("G:\\TESTS.txt");
	for (int i = 0; i < 10; i++)
	{
		fin >> st;
		st.average = (st.inf + st.math + st.phys) / 3;
		arr[i] = st;
	}
	fin.close();
}
void sort_st(Student* arr)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j >= i; j--)
		{
			if (arr[j - 1].average > arr[j].average)
			{
				Student st = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = st;
			}
		}
	}
}
void show_st(Student* arr)
{
	for (int i = 0; i < 10; i++) cout << arr[i];
}
int main()
{
	Student STUD[10];
	read_data(STUD);
	sort_st(STUD);
	show_st(STUD);
}