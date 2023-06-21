/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmitache <rmitache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:14:49 by rmitache          #+#    #+#             */
/*   Updated: 2023/06/04 16:11:40 by rmitache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c && *str != 0)
		str++;
	if (*str == c)
		return (str);
	else
		return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	i;
	size_t	total_size;

	i = 0;
	total_size = count * size;
	mem = malloc(total_size);
	if (!mem)
		return (NULL);
	while (i < total_size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	char	*copy;

	if (s1 == NULL)
		s1 = ft_calloc(1, sizeof(char));
	mem = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (mem && s1 && s2)
	{
		copy = mem;
		while (*s1 != '\0')
			*mem++ = *s1++;
		while (*s2 != '\0')
			*mem++ = *s2++;
		*mem = '\0';
	}
	else
		return (NULL);
	return (copy);
}
