#include "libft.h"

void	ft_del(void *content, size_t size)
{
	(void)size;
	free(content);
}

int		main(int ac, char **av)
{
	t_list *list;
	t_list *new;
	t_list *two;
	char **arr;
	int i;

	i = 0;
	if (strcmp(av[1], "list") == 0)
	{
		ft_putendl("----- LIST THINGS -----");
		new = ft_lstnew(" World", sizeof(" World"));
		two = ft_lstnew("Hello", sizeof("Hello"));
		ft_lstadd(&list, new);
		ft_lstadd(&list, two);
		ft_putstr("First element: ");
		ft_putendl(two->content);
		ft_putstr("Second element: ");
		ft_putendl(new->content);
		ft_putchar('\n');
		ft_putendl("Looping throught the list: ");
		while (list)
		{
			ft_putstr(list->content);
			list = list->next;
		}
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putendl("Deleting a node in the list: ");
		ft_lstdelone(&new, &ft_del);
		if (new)
			ft_putendl(new->content);
		else
			ft_putendl("Nothing fam. It got deleted. I swear. Would I lie to you?\n");
	}
	if (strcmp(av[1], "str") == 0)
	{
		ft_putendl("----- STRING THINGS -----");
		ft_putendl(av[1]);
		ft_putnbr(ft_strlen(av[1]));
		ft_putchar('\n');
		if (ac == 3)
		{
			ft_putendl(ft_strjoin(av[1], av[2]));
			ft_putnbr(ft_strcmp(av[1], av[2]));
		}
	}
	if (strcmp(av[1], "split") == 0)
	{
		ft_putendl("----- SPLIT THINGS -----");
		arr = ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
		while (arr[i] != '\0')
		{
			ft_putendl(arr[i]);
			i++;
		}
	}
}
