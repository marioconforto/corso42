/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:00:56 by mconfort          #+#    #+#             */
/*   Updated: 2023/01/31 20:15:49 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while (s[i] != c)
		i--;
	return (((char *)s) + i);
}
/*
int main()
{
	printf("%s\n", ft_strrchr('\0','\0'));
}*/
