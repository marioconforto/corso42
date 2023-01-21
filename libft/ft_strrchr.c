/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:00:56 by mconfort          #+#    #+#             */
/*   Updated: 2023/01/21 12:32:00 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (s[i] != c)
		i--;
	return (((char *)s) + i);
}

int	main()
{
	printf("%s\n",strrchr("This is just a string",'s'));
	printf("%s\n",ft_strrchr("This is just a string",'s'));
}
