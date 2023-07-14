#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	if (n > 0) {
		printf("n = %d is positivie\n", n);
	}else (n == 0) {
		printf("n = %d\n", n);
	}else { 
                printf("n =%d is negative\n", n);
        }
	
	return (0);
}
