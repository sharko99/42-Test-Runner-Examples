#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main (void)
{
	unsigned char *s = "lxnwqeetcoqw q 30 5.4 2328 023 d f egwe  if ]\0";
	int c = (int)'q';
	size_t n = 20;

	unsigned char *c1 = memchr(s, c, n);
	unsigned char *c2 = ft_memchr(s, c, n);
	printf("(base)[%s] | (redo)[%s]\n", c1, c2);
	if (c1 == c2)
		return (0);
	return (1);
}
