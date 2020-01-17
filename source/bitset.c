#include <stdio.h>

int setBit(int number, int position)
{
	number = number | (1 << position);
	return number;
}

int main()
{
	printf("%d\n", setBit(9, 2));
	return 0;
}
