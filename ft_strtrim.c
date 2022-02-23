static size_t	start(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s1[i])
	{
		while (set[k])
		{
			if (s1[i] == set[k])
			{
				i++;
				k = 0;
				break ;
			}
			k++;
		}
		if (k == ft_strlen(set))
			break ;
	}
	return (i);
}

static size_t	end(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = ft_strlen(s1) - 1;
	k = 0;
	while (s1[i])
	{
		while (set[k])
		{
			if (s1[i] == set[k])
			{
				if (i != 0)
					i--;
				else
					return (i);
				k = 0;
				break ;
			}
			k++;
		}
		if (k == ft_strlen(set))
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = start(s1, set);
	k = end(s1, set);
	return (ft_substr(s1, i, (k - i)));
}
