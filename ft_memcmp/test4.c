#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const char *s1, const char *s2, size_t n);

int main (void)
{
	int a = memcmp("", "", 10);
	int b = ft_memcmp("", "", 10);
	printf("(base)[%d] | (redo)[%d]", a, b);
	if(a == b)
		return (0);
	return (1);
}
