#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main fucntion
 * this program prints "Programming is positive, zero, or negative"
 * Return: 0
 */
int main(void)
{
int n;
int digit; //new variable

srand(time(0));
n = rand() - RAND_MAX / 2;

digit = n % 10; //module - remainder

if (digit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, digit);
}
else if (digit == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, digit);
}
else if (digit < 6 && digit != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
}
return (0);
}
