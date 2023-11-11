//TEST

#include <stdlib.h>

void	*ft_bzero(void *s, size_t n);

#include <stdio.h>
int main(void)
{
	char s1[100] = "aaaaa";
	ft_bzero(&s1, 2);
	for (int i = 0; i<5; i++)
	{
		printf("(%c)\n", s1[i]);
	}
	return (0);
}
