#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const char *s1, const char *s2, size_t n);

int main (void)
{
	int a = memcmp("this is s\0ome case to handle\0", "this is s\0ome dase to handle\0", 4);
	int b = ft_memcmp("this is s\0ome case to handle\0", "this is s\0ome dase to handle\0", 4);
	printf("(base)[%d] | (redo)[%d]", a, b);
	if(a == b)
		return (0);
	return (1);
}
