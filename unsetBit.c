#include <stdio.h>

int unsetBit(int number, int position);

int main()
{
	int num;
	int position;
	int unset_number;

	num = 15;
	position = 2;

	unset_number = unsetBit(num, position);
	printf("New unset number = %d\n", unset_number);
	return(0);
}

int unsetBit(int number, int position)
{
	number = number & (~(1 << position));
	return number;
}
