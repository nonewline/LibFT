#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *n_list;

	n_list = (t_list *)malloc(sizeof(n_list));
	if (n_list == NULL)
		return (NULL);
	if (content == NULL)
	{
		n_list->content = NULL;
		n_list->content_size = 0;
	}
	else
	{
		n_list->content = malloc(sizeof(content));
		if (n_list->content == NULL)
			return (NULL);
		ft_memcpy(n_list->content, content, sizeof(content));
		n_list->content_size = content_size;
	}
	n_list->next = NULL;
	return (n_list);
}
