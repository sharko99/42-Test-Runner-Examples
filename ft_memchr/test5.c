#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main (void)
{
	unsigned char *s = "Yep, we're trying to handle case that doesn't exist\0";
	int c = (int)'.';
	size_t n = -250;

	unsigned char *c1 = memchr(s, c, n);
	unsigned char *c2 = ft_memchr(s, c, n);
	printf("(base)[%s] | (redo)[%s]\n", c1, c2);
	if (c1 == c2)
		return (0);
	return (1);
}
