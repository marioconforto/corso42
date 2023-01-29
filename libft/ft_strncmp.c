/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:32:36 by mconfort          #+#    #+#             */
/*   Updated: 2023/01/29 18:03:58 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i <= n)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	if (i != n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else
			return (1);
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n", strncmp("hello","he",4));
	printf("%d\n", ft_strncmp("hello", "he", 4));
	return (0);
}*/	
