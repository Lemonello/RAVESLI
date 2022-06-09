#include"FOR_ALL_TASKS.h"

//TASK 3

int main()
{
	srand(time(NULL));
	string your_turn = "Your turn: ";
	int all = 100, count_user, count_pc;
	while (all)
	{
		cin >> count_user;
		if (all - count_user <= 0)
		{
			cout << "You WIN!!!" << endl;
			break;
		}
		all -= count_user;
		count_pc = rand() % 10;
		if (all - count_pc <= 0)
		{
			cout << "PC WIN!!!" << endl;
			break;
		}
		all -= count_pc;
		cout << your_turn << endl;
	}
}

