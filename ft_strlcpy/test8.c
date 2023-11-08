#include <bsd/string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size);

int ft_test(char *s1, char *s2, size_t s)
{	
	char dest1[100];
	strcpy(dest1, s1);
	char source1[100];
	strcpy(source1, s2);
	char dest2[100];
	strcpy(dest2, s1);
	char source2[100];
	strcpy(source2, s2);
	size_t siz = s;
	int a = strlcpy(dest1, source1, siz);
	int b = ft_strlcpy(dest2, source2, siz);
    if(strcmp(dest1, dest2) == 0 && a == b)
        return (0);
    else
        return (1);
}

int main(void)
{
	return (ft_test("a", "", 100000));
}
