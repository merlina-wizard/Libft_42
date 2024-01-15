void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char*)malloc(count * size + 1);
	if (!dst)
		return (0);
	while (i <= (count * size))
	{
		((unsigned char *)dst[i]) = '\0';
		i++;
	}
	return (dst);
}
