#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int main (void)
{
	char *s = "bonjour";
	char *c = strchr(s, 'o');
	char *c2 = ft_strchr(s, 'o');
	printf("[%s] | [%s]", c, c2);
	if (c == c2)
		return (0);
	return (1);
}
