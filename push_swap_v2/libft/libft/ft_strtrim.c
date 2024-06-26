/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:48:36 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:48:38 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strrchr(set, s1[end - 1]) && end > start)
		end--;
	trim_str = (char *)malloc((end - start + 1) * sizeof(char));
	if (trim_str)
		ft_strlcpy(trim_str, &s1[start], end - start + 1);
	else
		return (0);
	return (trim_str);
}

/*int main()
{
    char *trim_str = ft_strtrim("abqbc", "abc");
    puts(trim_str);
}*/
