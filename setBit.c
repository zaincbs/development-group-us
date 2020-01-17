#include <stdio.h>

int setBit(int number, int position);

int main()
{
	int num;
	int position;
	int set_number;

	num = 9;
	position = 2;

	set_number = setBit(num, position);
	printf("New set number = %d\n", set_number);
	return(0);
}

int setBit(int number, int position)
{
	number = number | (1 << position);
	return number;
}
