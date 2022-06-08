#include"FOR_ALL_TASKS.h"

//TASK 2

bool is_Pal(int* nums, int& numb)
{
	nums[0] = numb / 1000;
	nums[1] = numb % 1000 / 100;
	nums[2] = numb % 100 / 10;
	nums[3] = numb % 100 % 10;
	if (nums[0] == nums[3] && nums[1] == nums[2]) return 1;
	else return 0;
}
int main()
{
	int ar1[4], number;
	cin >> number;
	if (is_Pal(ar1, number)) cout << "This is palindrom" << endl;
	else cout << "It is not palindrom" << endl;
}