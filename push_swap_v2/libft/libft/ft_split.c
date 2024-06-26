/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:46:02 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:46:03 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	ft_count_words(char *str, char c)
{
	int	flag;
	int	i;
	int	words;

	flag = 1;
	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i])
		{
			if (flag == 1)
			{
				words++;
				flag = 0;
			}
			i++;
		}
		flag = 1;
	}
	return (words);
}

static char	*ft_fulfill_tab(char *s, char c, size_t *i)
{
	int	start;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	size;
	size_t	i;
	size_t	k;

	size = ft_count_words((char *)s, c);
	i = 0;
	k = 0;
	tab = malloc((size + 1) * sizeof(char *));
	while (s[i] && k < size)
	{
		tab[k] = ft_fulfill_tab((char *)s, c, &i);
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

/* int main()
{
    char **tab;
    int i = 0;
    
    tab = ft_split("lorem ipsum dolor sit amet", ' ');
    
    while(i < 20)
    {
        printf("tab[%d]: %s\n", i, tab[i]);
        i++;
    }
}*/
