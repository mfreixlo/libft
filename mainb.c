#include "libft.h"

static void upp (void *str)
{
	char *s;

	s = str;
	while (*s)
	{
		*s = *s - 'a' + 'A';
		s++;
	}
}

static void *upp1 (void *str)
{
	char *s;
	char *s1;

	s1 = (char*) str;
	s = malloc(sizeof(char) * strlen(s1));
	while (*s1)
	{
		*s = *s1 - 'a' + 'A';
		s++;
		s1++;
	}
	return (s);
}

int main()
{
	char funcao[50];
	char str1[10] = "primeiro";
	char str2[10] = "segundo";
	char str3[10] = "novo";
	char str4[10] = "quatro";

	t_list *tres;
	t_list *um;
	t_list *dois;
	t_list **lst;
	t_list *quatro;

	scanf("%s", funcao);
	if (!strcmp(funcao, "lstnew"))
	{
		char str[10] = "conteudo";
		t_list *new;
		
		new = ft_lstnew(str);
		printf("%s\n",(char*) new->content);	
	}
	else if(!strcmp(funcao, "lstadd_front"))
	{
		lst = malloc(sizeof(t_list*) * 2);
		um = ft_lstnew(str1);
		dois = ft_lstnew(str2);
		tres = ft_lstnew(str3);
		um->next = dois;
		*lst = um;
		ft_lstadd_front(lst, tres);
		while (*lst)
		{
			printf("%s\n", (char*)((*lst)->content));
			*lst = (*lst)->next;	
		}
	}
	else if (!strcmp(funcao, "lstsize"))
	{
		um = ft_lstnew(str1);
		dois = ft_lstnew(str2);
		tres = ft_lstnew(str3);
		um->next = dois;
		dois->next = tres;
		printf("%d\n", ft_lstsize(um));
	}
	else if (!strcmp(funcao, "lstlast"))
	{
		um = ft_lstnew(str1);
		dois = ft_lstnew(str2);
		tres = ft_lstnew(str3);
		um->next = dois;
		dois->next = tres;
		printf("%s\n", (char*)ft_lstlast(um)->content);
	}
	else if (!strcmp(funcao, "lstadd_back"))
	{
		um = ft_lstnew(str1);
		dois = ft_lstnew(str2);
		tres = ft_lstnew(str3);
		quatro = ft_lstnew(str4);
		um->next = dois;
		dois->next = tres;
		lst = malloc(sizeof(t_list*) *10);
		*lst = um;
		printf("%s\n", (char*)ft_lstlast(um)->content);
		ft_lstadd_back(lst, quatro);
		printf("%s\n", (char*)ft_lstlast(um)->content);
	}
	else if (!strcmp(funcao, "lstiter"))
	{
		um = ft_lstnew(str1);
		dois = ft_lstnew(str2);
		tres = ft_lstnew(str3);
		quatro = ft_lstnew(str4);
		um->next = dois;
		dois->next = tres;
		tres->next = quatro;
		printf("%s\n", (char*)um->content);
		printf("%s\n", (char*)um->next->content);
		ft_lstiter(um, upp);
		printf("%s\n", (char*)um->content);
		printf("%s\n", (char*)um->next->content);
	}
	else if (!strcmp(funcao, "lstmap"))
	{
		um = ft_lstnew(str1);
		dois = ft_lstnew(str2);
		tres = ft_lstnew(str3);
		um->next = dois;
		dois->next = tres;
		
		printf("%s\n", (char*)um->content);
		printf("%s\n", (char*)um->next->content);
		
		quatro = ft_lstmap(um, upp1, upp);

		printf("%s\n", (char*)quatro->content);
		printf("%s\n", (char*)quatro->next->content);
	}
	return (0);
}
