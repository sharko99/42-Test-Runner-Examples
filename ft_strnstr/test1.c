#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int main (void)
{
	char *big = "this is abc string, nothing more basic\0";
	char *little = "abc";
	size_t size = 11;

	char *a = strnstr(big, little, size);
	char *b = ft_strnstr(big, little, size);
	printf("(base)[%s] | (redo)[%s]\n", a, b);
	return (strcmp(a, b));
}
