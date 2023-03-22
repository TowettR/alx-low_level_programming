
#include "main.h"


	/**
	 * main - Entry point
	 *
	 * followed by a new line
	 */
	int main(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
	}


