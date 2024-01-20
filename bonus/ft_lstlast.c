t_list *ft_lstlast(t_list *lst)
{

	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst->next = lst;
	return (lst);
}
