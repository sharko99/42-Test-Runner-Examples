#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int main (void)
{
	char *s = "bonjour";
	char *c = strrchr(s, 'y');
	char *c2 = ft_strrchr(s, 'y');
	printf("[%s] | [%s]", c, c2);
	if (c == c2)
		return (0);
	return (1);
}
