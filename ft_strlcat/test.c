#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int main(void)
{
	char dest1[100];
	strlcpy(dest1, "hello", 6);
	char source1[100];
	strlcpy(source1, "world", 6);
	char dest2[100];
	strlcpy(dest2, "hello", 6);
	char source2[100];
	strlcpy(source2, "world", 6);
	size_t siz = 11;
	int a = strlcat(dest1, source1, siz);
	int b = ft_strlcat(dest2, source2, siz);
	printf("strlcat: [%s](%d)\nft_strlcat: [%s](%d)", dest1, a, dest2, b);
    if(strcmp(dest1, dest2) == 0 && a == b)
        return (0);
    else
        return (1);
}