#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const char *s1, const char *s2, size_t n);

int main (void)
{
	char *sa = "a";
	char *sb = "z";
	size_t size = 1;
	int a = memcmp(sa, sb, size);
	int b = ft_memcmp(sa, sb, size);
	printf("(base)[%d] | (redo)[%d]", a, b);
	if(a == b)
		return (0);
	return (1);
}
