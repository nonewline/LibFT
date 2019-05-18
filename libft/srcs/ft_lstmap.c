#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *cur;

	list = f(lst);
	if (list == NULL)
		return (NULL);
	cur = list;
	while (lst->next)
	{
		lst = lst->next;
		cur->next = f(lst);
		if (cur->next == NULL)
			return (NULL);
		cur = cur->next;
	}
	return (list);
}
