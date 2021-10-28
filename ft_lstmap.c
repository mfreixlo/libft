#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *aux;
	t_list *new;

	new = NULL;
	while (lst)
	{	
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
				ft_lstclear(&new, del);
				return (NULL);
		}
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	return (new);
}
