#include <stdlib.h>
#include <unistd.h>
#include "libft.h"


static void	test_striteri_1(unsigned int i, char *c)
{
	*c -= i;
}

static char		mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

static void	ft_print(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void	check_substr(char *str, int start, int len)
{
	char	*substr;

	if (!(substr = ft_substr(str, start, len)))
		ft_print("NULL\n");
	else
	{
		ft_print(substr);
		ft_print("\n");
	}
	if (str == substr)
		ft_print("\nA new string was not returned\n");
	else
		free(substr);
}

int main()
{
	char funcao[100];
	char str2[] = "ypo";
	char str1[] = "esta e a segunda frase";
	char *str3;
	char **split;
	int i;

	scanf("%s", funcao);
	if (!strcmp(funcao, "substr"))
		check_substr(str1, 5, 25);
	else if (!strcmp(funcao, "strjoin"))
	{
		str3 = ft_strjoin(str2, str1);
		ft_print(str3);
		ft_print("\n");
	}
	else if (!strcmp(funcao, "strtrim"))
	{
		str3 = ft_strtrim(str1, str2);
		ft_print(str3);
		ft_print("\n");
	}	
	else if (!strcmp(funcao, "split"))
	{
		split = ft_split(str1, 'a');
		i = 0;
		while (split[i])
		{
			printf("%s\n", split[i]);
			i++;
		}
	}
	else if (!strcmp(funcao, "itoa"))
	{
		printf("%s\n", ft_itoa(1534));
		printf("%s\n", ft_itoa(-2147483648));
	}
	else if(!strcmp(funcao, "strmapi"))
	{
		char	*str;
		char	*strmapi;

		str = malloc(sizeof(char) * 12);
		strcpy(str, "LoReM iPsUm");
		if (!(strmapi = ft_strmapi(str, &mapi)))
			ft_print("NULL");
		else
		{
			ft_print(strmapi);
			ft_print("\n");
			if (strmapi[11] != '\0')
				ft_print("\nString is not null terminated");
			if (strmapi == str)
				ft_print("\nA new string was not returned");
			else
				free(strmapi);
		}
		free(str);
	}
	else if(!strcmp(funcao, "striteri"))
	{
		void	(*f)(unsigned int, char*);
		char	ptr[20] = "bonjour";

		f = &test_striteri_1;
		ft_striteri(ptr, f);
		ft_print("TEST STRITERI : ");
		if (!strcmp(ptr, "bnlgkpl"))
			ft_print("ok :)\n");
		else
			ft_print("not ok :(\n");
	}
	else if(!strcmp(funcao, "putchar_fd"))
	{
		int		i;
		int		arg;

		scanf("%d", &arg);
		if (arg == 1)
		{
			i = 0;
			while (i <= 47)
			{
				ft_putchar_fd(i, 2);
				i++;
			}
		}
		else if (arg == 2)
		{
			i = '0';
			while (i <= '9')
			{
				ft_putchar_fd(i, 1);
				i++;
			}
		}
		else if (arg == 3)
		{
			i = 58;
			while (i <= 64)
			{
				ft_putchar_fd(i, 2);
				i++;
			}
		}
		else if (arg == 4)
		{
			i = 'A';
			while (i <= 'Z')
			{
				ft_putchar_fd(i, 1);
				i++;
			}
		}
		else if (arg == 5)
		{
			i = 91;
			while (i <= 96)
			{
				ft_putchar_fd(i, 2);
				i++;
			}
		}
		else if (arg == 6)
		{
			i = 'a';
			while (i <= 'z')
			{
				ft_putchar_fd(i, 1);
				i++;
			}
		}
		else if (arg == 7)
		{
			i = 123;
			while (i <= 127)
			{
				ft_putchar_fd(i, 2);
				i++;
			}
		}
	}
	else if(!strcmp(funcao, "putstr_fd"))
	{
			int		arg;

			scanf("%d", &arg);
			if (arg == 1)
				ft_putstr_fd("lorem ipsum dolor sit amet", 2);
			else if (arg == 2)
				ft_putstr_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);
			else if (arg == 3)
				ft_putstr_fd("", 2);
			else if (arg == 4)
				ft_putstr_fd("lorem ipsum do\0lor sit amet", 1);
	}
	else if (!strcmp(funcao, "putendl_fd"))
	{
			int arg;

			scanf("%d", &arg);
			if (arg == 1)
				ft_putendl_fd("lorem ipsum dolor sit amet", 2);
			else if (arg == 2)
				ft_putendl_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);
			else if (arg == 3)
				ft_putendl_fd("", 2);
			else if (arg == 4)
				ft_putendl_fd("lorem ipsum do\0lor sit amet", 1);
	}
	else if (!strcmp(funcao, "putnbr_fd"))
	{
		int		arg;

		scanf("%d", &arg);
		if (arg == 1)
			ft_putnbr_fd(0, 2);
		else if (arg == 2)
			ft_putnbr_fd(5, 1);
		else if (arg == 3)
			ft_putnbr_fd(-5, 2);
		else if (arg == 4)
			ft_putnbr_fd(42, 1);
		else if (arg == 5)
			ft_putnbr_fd(-57, 2);
		else if (arg == 6)
			ft_putnbr_fd(164189, 1);
		else if (arg == 7)
			ft_putnbr_fd(-987441, 2);
		else if (arg == 8)
			ft_putnbr_fd(2147483647, 1);
		else if (arg == 9)
			ft_putnbr_fd(-2147483648, 2);
	}
	return (0);
}
