t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*node;
	t_list	*pol;

	if (lst)
	{
		pol = ft_lstnew(f(lst->content));
		if (!pol)
			return (NULL);
		lst = lst->next;
		while (lst)
		{
			node = ft_lstnew(f(lst->content));
			if (!node)
			{
				ft_lstclear(&pol, del);
				return (NULL);
			}
			ft_lstadd_back(&pol, node);
			lst = lst->next;
		}
		return (pol);
	}
	return (NULL);
}
