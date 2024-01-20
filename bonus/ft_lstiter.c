void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
