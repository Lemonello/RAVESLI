#include"FOR_ALL_TASKS.h"

//TASK 3

const int SIZE = 80, COUNT = 10;
enum CHOICES { ADD_TICK = 1, DEL_TICK, SHOW_TICK, SHOW_ALL };
class Passanger
{
	string name, place, date;
	int flight_id = 0; bool flag = 1;
public:
	friend bool is_free(Passanger* arr);
	friend void show_ticket(int NUM_OF_TICKET, Passanger* arr);
	friend void show_all(Passanger* arr);
	friend void add_ticket(Passanger* arr);
	friend void delete_ticket(int NUM_OF_TICKET, Passanger* arr);
	Passanger() {}
	Passanger(string n, string pl, string dat)
	{
		name = n; place = pl; date = dat; flag = 0;
	}
};
void add_ticket(Passanger* arr)
{
	string fio, arrival, day;
	cin.ignore();
	getline(cin, fio);
	getline(cin, arrival);
	getline(cin, day);
	Passanger pas(fio, arrival, day);
	arr[is_free(arr)] = pas;
}
void delete_ticket(int NUM_OF_TICKET, Passanger* arr)
{
	arr[NUM_OF_TICKET].name = "\0";
	arr[NUM_OF_TICKET].place = "\0";
	arr[NUM_OF_TICKET].date = "\0";
	arr[NUM_OF_TICKET].flag = 0;
}
bool is_free(Passanger* arr)
{
	int count = 0;
	while (arr->flag == 0)
	{
		count++;
		arr++;
	}
	return count;
}
void show_ticket(int NUM_OF_TICKET, Passanger* arr)
{
	cout << arr[NUM_OF_TICKET].name << endl;
	cout << arr[NUM_OF_TICKET].place << endl;
	cout << arr[NUM_OF_TICKET].date;
}
void show_all(Passanger* arr)
{
	for (int i = 0; i < COUNT; i++, arr++)
	{
		cout << arr[i].name << endl;
		cout << arr[i].place << endl;
		cout << arr[i].date;
	}
}
int main()
{
	int choice;
	Passanger peop[COUNT];
	cin >> choice;
	switch (choice)
	{
	case ADD_TICK:
	{
		add_ticket(peop);
		break;
	}
	case DEL_TICK:
	{
		int num;
		cin >> num;
		delete_ticket(num, peop);
		break;
	}
	case SHOW_TICK:
	{
		int num;
		cin >> num;
		show_ticket(num, peop);
		break;
	}
	case SHOW_ALL:
	{
		show_all(peop);
		break;
	}
	}
}


