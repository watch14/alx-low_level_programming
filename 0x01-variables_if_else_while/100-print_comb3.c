#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
        int a,b;

        for (a = '0'; a <= '9'; a++)
        {
		for(b = '0' +1 ; b <= '9' ; b++)
		{
			putchar (a);
			putchar (b);
			if (a == '9' && b == '9')
				break;
			putchar (',');
			putchar (' ');
		}
	}
        putchar('\n');
        return (0);
}
