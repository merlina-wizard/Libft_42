void	ft_lstaddback(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst->next == NULL)
	{
		*lst = new;
		return ;
	}
	while (*lst->next != NULL)
		*lst->next = *list;
	*lst->next = new;
}
