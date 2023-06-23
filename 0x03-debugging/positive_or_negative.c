#include "main.h"
/**
 *i is any number
 *vi positive_or_negative.c checks for positive and negative numbers
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
