#include "libft.h"

	//count words
	//allocate memory for arr str
	//cpy word in correct position
int	safe_malloc(char **tknv, int position, size_t buffer)
{
	int	i;

	i = 0;
	tknv[position] = malloc(buffer);
	if (tknv[position] == NULL)
	{
		while(i < position)
		{
								/*tknv-->[0]
									  -->[1]
									  -->[2]
									  -->[position]fail!!
								  */
			free(tknv[i++]);
		}
		free(tknv);
		return (1);
	}
	return (0);
}
int	ft_fill(char **tknv, char const *s, char spr)
{
	size_t	len;
	int i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == spr && *s)
			++s;
		while(*s != spr && *s) //calculate the len of tkn mving ptr
		{
			++len;
			++S;
		}
		if (len)
		{
			safe_malloc(tknv, i, len + 1);//tkv, position[i], malloc len(return(0/1))
		}
		//?????????????????'???????????????
		//         dst     Hello     \0
		ft_strlcpy(tknv[i], s - len, len + 1);
	}
}
size_t	ft_count_tkn(char const *s, char spr)
{
	size_t	tkn;
	bool ft_inside_tkn;

	tkn = 0;
	while (*s)
	{
		ft_inside_tkn = false;
		while (*s == spr && *s)//skip spr
			++s;
		while(*s != spr && *s)
		{
			if (!ft_inside_tkn)//just entered the tkn
			{
				tkn++;
				ft_inside_tkn = true;
			}
			++s;
		}
	}
		return tkn;
}

char	**ft_split(char const *s, char c)
{
	size_t	tkn;
	char	**tknv; //argv

	if (s == NULL)
		return (NULL);
	tkn = 0;
	tkn = ft_count_tkn(s, c);
	tknv = malloc(sizeof(char *) * (tkn + 1 ));//ptr->ptrs->tkn
	if (tknv == NULL)
		return (NULL);
	tknv[tkn] = '\0';
	if (ft_fill(tknv, s, c))
		return (NULL);
	return tknv;
}

int main()
{
	char *s = "    Hello there, dude!";
	char **v = ft_split(s, ' ');
	while (*v)
	{
		printf("%s\n", *v++);
	}
}
