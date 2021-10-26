char *ft_strrchr(const char *s, int c)
{
	char *d;

	while (*s)
	{
		if (*s == c)
			d = (char*)s;
		s++;	
	}
	return (d);
}
