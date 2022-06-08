#include"FOR_ALL_TASKS.h"

//TASK 1

int main()
{
	int length = 0;
	char s1[80], * s;
	gets_s(s1);
	s = s1;
	while (*s)
	{
		length++;
		s++;
	}
	cout << length << endl;
}