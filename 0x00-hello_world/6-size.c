#include <stdio.h>
/**
 * main - the main function
 *
 * Return: 0 on success
 */
int main(void)
{
	char ch;
	int itn;
	long int lint;
	long long int _lint;
	float flt;

	printf("size of a char: %lu byte(s)\n", sizeof(ch));
	printf("size of an int: %lu byte(s)\n", sizeof(itn));
	printf("size of a long int: %lu byte(s)\n", sizeof(lint));
	printf("size of a long long int: %lu byte(s)\n", sizeof(_lint));
	printf("size of a float: %lu byte(s)\n", sizeof(flt));
	return (0);
}

