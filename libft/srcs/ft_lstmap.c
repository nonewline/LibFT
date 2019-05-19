#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *head;

	list = NULL;
	if (lst && f)
	{
		head = f(lst);
		list = head;
		lst = lst->next;
		while (lst)
		{
			head->next = f(lst);
			head = head->next;
			lst = lst->next;
		}
	}
	return (list);
}
