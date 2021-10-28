#include <stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	int max_int;
	void *s;
	int i;

	max_int = 2147483647;
	if (nmemb != 0 && max_int / (int) nmemb < (int) size)
		return (NULL);	
	s = malloc(size * nmemb);
	if (s)
	{
		i = 0;
		while (i < (int) size)
		{
			((unsigned char *)s)[i] = (unsigned char) 0;
			i++;
		}
	}
	return (s);
}
