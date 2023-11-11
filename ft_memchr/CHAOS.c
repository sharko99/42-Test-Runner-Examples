#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main (void)
{
	unsigned char s[350];
	int c = (int)'A';
	size_t n = 350;
	srand((unsigned int)time(NULL));
	for (int i = 0;i<349;i++)
	{
		int r = rand() % 200;
		s[i] = (unsigned char)r;
	}
	s[349] = '\0'; //Yep we're trying to do chaos but still keep the computer alive
	unsigned char *c1 = memchr(s, c, n);
	unsigned char *c2 = ft_memchr(s, c, n);
	printf("(base)[%s] | (redo)[%s]\n\n\nThe chaotic string is:\n\n%s", c1, c2, s);
	if (c1 == c2)
		return (0);
	return (1);
}
