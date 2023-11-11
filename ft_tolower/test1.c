#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c);

int main(void)
{
	int failure = 0;
	for (int i = 0; i < 127; i++)
	{
		int c = tolower(i);
		int v = ft_tolower(i);
		printf("%d: [%c] => [%c] | [%c]\n", i, i, c, v);
		if (c != v)
		{
			failure = 1;
		}
	}
	return (failure);
}