#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main (void)
{
	int a = strncmp("bonjour", "bonjour", 4);
	int b = ft_strncmp("bonjour", "bonjour", 4);
	printf("(base)[%d] | (redo)[%d]", a, b);
	if(a == b)
		return (0);
	return (1);
}
