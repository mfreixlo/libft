#include <stddef.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_size;
	size_t dst_size;

	src_size = 0;
	dst_size = 0;
	while (*dst)
	{
		dst++;
		dst_size++;
	}
	while ((int)src_size < (int)(size - dst_size - 1) && *src)
	{
		*dst = *src;		
		src_size++;
		dst++;
		src++;
	}
	while (*src)
	{
		src++;
		src_size++;
	}
	*dst = '\0';
	return src_size + dst_size;
}
