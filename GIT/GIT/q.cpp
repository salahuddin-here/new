#include <stdio.h>
int main(void)
{
	int i, j, k;
	for (i = 0; i < 8; i++)
	{
		for (k = 7; k >= i; k--)
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}