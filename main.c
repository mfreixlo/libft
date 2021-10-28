#include "libft.h"

int main()
{
	char funcao[150];
	scanf("%s", funcao);

	if (!strcmp(funcao, "strlen"))
	{
		printf("%ld\n", ft_strlen("oioi esta tudo"));
		printf("%ld\n", strlen("oioi esta tudo"));
		printf("%ld\n", ft_strlen(""));
		printf("%ld\n", strlen(""));
		printf("%ld\n", ft_strlen("F"));
		printf("%ld\n", strlen("F"));
	}
	else if (!strcmp(funcao, "isalpha"))
	{
		printf("%d\n", ft_isalpha('a'));
		printf("%d\n", isalpha('a'));
		printf("%d\n", ft_isalpha('8'));
		printf("%d\n", isalpha('8'));
		printf("%d\n", ft_isalpha('Z'));
		printf("%d\n", isalpha('Z'));
		printf("%d\n", ft_isalpha(12));
		printf("%d\n", isalpha(12));
		printf("%d\n", ft_isalpha(80));
		printf("%d\n", isalpha(80));
		printf("%d\n", ft_isalpha(115));
		printf("%d\n", isalpha(115));
	}
	else if (!strcmp(funcao, "memset"))
	{//se trocar char por int na definicao das listas da asneira, nao sei porque...
		int arr[11];
		int arr1[11];
		int loop;

		memset(arr,0,10);
		for(loop=0; loop<10; loop++)
			printf("%d ",arr[loop]);
		printf("\n");

		ft_memset(arr1,0,10);
		for(loop=0; loop<10; loop++)
			printf("%d ",arr1[loop]);
		printf("\n");
		
		memset(arr,-1,3);
		memset(arr+3,-2,3);
		memset(arr+6,-3,3);
		for(loop=0; loop<10; loop++)
			printf("%d ",arr[loop]);
		printf("\n");
		
		ft_memset(arr1,-1,3);
		ft_memset(arr1+3,-2,3);
		ft_memset(arr1+6,-3,3);
		for(loop=0; loop<10; loop++)
			printf("%d ",arr1[loop]);
		printf("\n");

		
		char arr2[10];
		char arr3[10];

		memset(arr2,0,10);
		for(loop=0; loop<10; loop++)
			printf("%d ",arr2[loop]);
		printf("\n");

		ft_memset(arr3,0,10);
		for(loop=0; loop<10; loop++)
			printf("%d ",arr3[loop]);
		printf("\n");
					
		memset(arr2,-1,3);
		memset(arr2+3,-2,3);
		memset(arr2+6,-3,3);
		for(loop=0; loop<10; loop++)
			printf("%d ",arr2[loop]);
		printf("\n");
		
		ft_memset(arr3,-1,3);
		ft_memset(arr3+3,-2,3);
		ft_memset(arr3+6,-3,3);
		for(loop=0; loop<10; loop++)
			printf("%d ",arr3[loop]);
		printf("\n");
	}
	else if (!strcmp(funcao, "bzero"))
	{
		char arr2[50] = "Ola esta tudo bem?";
		int loop;

		memset(arr2,2,10);
		for(loop=0; loop<30; loop++)
			printf("%c ",arr2[loop]);
		printf("\n");
		printf("%s\n", arr2);
		ft_bzero(arr2,7);
		for(loop=0; loop<30; loop++)
			printf("%d ",arr2[loop]);
		printf("\n");
	}
	else if (!strcmp(funcao, "memcpy"))
	{
		char arr[3] = "oi";
		char arr1[11] = "Palavriado";
		
		char arr2[3] = "oi";
		//char arr3[11] = "Palavriado";
		
		char arr4[3] = "oi";
		//char arr5[11] = "Palavriado";
		
		ft_memcpy(arr, arr1, 4);
		printf("%s\n", arr);
		
		//memcpy(arr2, arr3, 4);
		printf("%s\n", arr2);
	
		//memmove(arr4, arr5, 4);
		printf("%s\n", arr4);
	}
	else if (!strcmp(funcao, "strlcat"))
	{
		char str1[20] = "Ola mundi";
		char str2[20] = "nho";
		char str3[20] = "Ola mundi";

		printf("%lu\n", ft_strlcat(str1, str2, 2));
		printf("%s\n", str1);
		printf("%lu\n", strlcat(str3, str2, 2));
		printf("%s\n", str3);
	}
	else if(!strcmp(funcao, "strlcpy"))
	{
		char str1[20] = "Ola mundi";
		char str2[3] = "nho";
		char str3[3] = "nho";
		
		//printf("%lu\n", strlcpy(str2, str1, 6));
		printf("%s\n", str2);
	
		printf("%lu\n", ft_strlcpy(str3, str1, 6));
		printf("%s\n", str3);
	}
	else if(!strcmp(funcao, "toupper"))
	{
		printf("%c\n", ft_toupper('5'));	
		printf("%c\n", toupper('5'));
	}
	else if(!strcmp(funcao, "tolower"))
	{	
		printf("%c\n", ft_tolower('5'));	
		printf("%c\n", tolower('5'));
		printf("%c\n", ft_tolower('A'));	
		printf("%c\n", ft_tolower('A'));	
		printf("%c\n", tolower('Z'));
		printf("%c\n", tolower('Z'));
	}
	else if(!strcmp(funcao, "strchr"))
	{	
		char str1[10] = "Palavrinha";

		printf("%s\n", ft_strchr(str1, 'i'));	
		printf("%s\n", strchr(str1, 'i'));	
	}
	else if(!strcmp(funcao, "strrchr"))
	{	
		char str1[10] = "Palavrinha";

		printf("%s\n", ft_strrchr(str1, 'y'));	
		/*printf("%s\n", strrchr(str1, 'y'));*/	
	}
	else if(!strcmp(funcao, "strncmp"))
	{	
		printf("ft_strncmp(\"ola\", \"ola\", 2): %d\n", ft_strncmp("ola", "ola", 2));	
		printf("strncmp(\"ola\", \"ola\", 2): %d\n", strncmp("ola", "ola", 2));	
		printf("ft_strncmp(\"ola\", \"ola\", 4): %d\n", ft_strncmp("ola", "ola", 4));	
		printf("strncmp(\"ola\", \"ola\", 4): %d\n", strncmp("ola", "ola", 4));	
		printf("ft_strncmp(\"ola\", \"olar\", 3): %d\n", ft_strncmp("ola", "olar", 3));	
		printf("strncmp(\"ola\", \"olar\", 3): %d\n", strncmp("ola", "olar", 3));	
		printf("ft_strncmp(\"ola\", \"olar\", 4): %d\n", ft_strncmp("ola", "olar", 4));	
		printf("strncmp(\"ola\", \"olar\", 4): %d\n", strncmp("ola", "olar", 4));	
		printf("ft_strncmp(\"ola\", \"oli\", 3): %d\n", ft_strncmp("ola", "oli", 3));	
		printf("strncmp(\"ola\", \"oli\", 3): %d\n", strncmp("ola", "oli", 3));	
	}
	else if (!strcmp(funcao, "memchr"))
	{
		char text [20] = "Hello World Buuy";
		int c = 'y';
		int b = 5;
		printf("ft_memchr: %p\n", ft_memchr(text, c, b));
		printf("memchr: %p\n", memchr(text, c, b));
	}
	else if (!strcmp(funcao, "memcmp"))
	{
		char text1 [15] = "Ola  1mundo";
		char text2 [15] = "Ola 2mundo";
		int size = 20;

		printf("ft_memcmp: %d\n", ft_memcmp(text1,text2, size));
		printf("memcmp: %d\n", memcmp(text1,text2, size));
		printf("ft_memcmp: %d\n", ft_memcmp(text1,text2, 3));
		printf("memcmp: %d\n", memcmp(text1,text2, 3));
		printf("ft_memcmp: %d\n", ft_memcmp(text1,text2, 0));
		printf("memcmp: %d\n", memcmp(text1,text2, 0));
	}
	else if(!strcmp(funcao, "strnstr"))
	{
		char str1[60] = "Procurar aqui a palav que palavra";
		char str2[30] = "palav";
		
		printf("%s\n", ft_strnstr(str1, str2, 60));
	}
	else if(!strcmp(funcao, "atoi"))
	{
		printf("%d\n", ft_atoi("+234")); //234
		printf("%d\n", ft_atoi("-234")); //-234
		printf("%d\n", ft_atoi("+-234")); //0
		printf("%d\n", ft_atoi(" +234")); //234
		printf("%d\n", ft_atoi("+ 234")); //0
		printf("%d\n", ft_atoi("+23u4")); //23
		printf("%d\n", ft_atoi("+o234")); //0
		printf("%d\n", ft_atoi("--234")); //0
		printf("%d\n", ft_atoi("   	23 4")); //23
	}
	else if(!strcmp(funcao, "calloc"))
	{
		char	*str;
		char	*str1;

		str = (char *)calloc(0, sizeof(char));
		if (!str)
			write(1, "NULL", 4);
		else
			printf("%d\n", *str);

		str1 = (char *)ft_calloc(0, sizeof(char));
		if (!str1)
			write(1, "NULL", 4);
		else
			printf("%d\n", *str1);
		free(str);
	}
	else if(!strcmp(funcao, "strdup"))
	{
		char s1[40] = "Uma frase para copiar";
		char *s2;

		s2 = ft_strdup(s1);
		printf("%s\n", s2);
	}
	return (0);
}





