#include"FOR_ALL_TASKS.h"

//TASK 1

int main()
{
	char s1[80];
	gets_s(s1);
	int size = strlen(s1);
	char* start = s1; char* end; end = &s1[size - 1];
	while (start <= end)
	{
		cout << *end;
		--end;
	}
}

//TASK 3

const int SIZE = 10, COUNT = 2;
enum TYPES { FORMALIST = 1, NEFORMAL, REALIST };
string names[SIZE]{ "Aleksander", "Andrew", "Anastasiya", "Irina", "Nataly","Pavel", "Roman", "Svetlana","Sergei", "Tany" };
class Realist
{
public:
	string name = names[rand() % 10], type1 = "Realist", myname = "My name is ", im = "I'm ";
	string arr_names[COUNT];
	int age = rand() % 40 - 20;
	virtual void about()
	{
		cout << myname << name << im << age << "and i'm " << type1;
	}
	virtual void hello(int h_age, int age = 0)
	{
		if (h_age <= this->age || h_age - this->age <= 5)
		{
			cout << "Hello " << arr_names[0] << endl;
			cout << "Hello " << arr_names[1] << endl;
		}
		else
		{
			cout << "Greetings" << arr_names[0] << endl;
			cout << "Greetings " << arr_names[1] << endl;
		}
	}
	virtual void arr_n(string ob1, string ob2)
	{
		arr_names[0] = ob1;
		arr_names[1] = ob2;
	}
	string get_name() { return name; }
};
class Formalist :Realist
{
public:
	string type2 = "Formalist";
	void about()
	{
		cout << myname << name << im << age << "and i'm " << type2;
	}
	void hello()
	{
		cout << "Greetings " << arr_names[0] << endl;
		cout << "Greetings " << arr_names[1] << endl;
	}
	void arr_n(string ob1, string ob2)
	{
		arr_names[0] = ob1;
		arr_names[1] = ob2;
	}
	string get_name() { return name; }
	int get_age() { return age; }
};
class Neformal :Realist
{
public:
	string type3 = "Neformal";
	void about()
	{
		cout << myname << name << im << age << "and i'm " << type3;
	}
	void hello()
	{
		cout << "Hello " << arr_names[0] << endl;
		cout << "Hello" << arr_names[1] << endl;
	}
	void arr_n(string ob1, string ob2)
	{
		arr_names[0] = ob1;
		arr_names[1] = ob2;
	}
	string get_name() { return name; }
	int get_age() { return age; }
};
int main()
{
	Realist real;
	Formalist form;
	Neformal neform;
	real.about();
	form.about();
	neform.about();
	real.arr_n(form.get_name(), neform.get_name());
	form.arr_n(real.get_name(), neform.get_name());
	neform.arr_n(real.get_name(), form.get_name());
	real.hello(form.get_age());
	real.hello(neform.get_age());
	form.hello();
	neform.hello();
}

