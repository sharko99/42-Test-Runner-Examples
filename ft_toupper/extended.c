#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c);

int main(void)
{
	int failure = 0;
	for (int i = 0; i < 255; i++)
	{
		int c = toupper(i);
		int v = ft_toupper(i);
		printf("%d: [%c] => [%c] | [%c]\n", i, i, c, v);
		if (c != v)
		{
			failure = 1;
		}
	}
	return (failure);
}