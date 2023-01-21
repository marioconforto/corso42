/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:02:44 by mconfort          #+#    #+#             */
/*   Updated: 2023/01/19 20:04:03 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#nclude<stdio.h>
#include<string.h>*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (((char *)s) + i);
}
/*
int	main()
{
	printf("%s\n",strchr("This is just a string",'s'));
	printf("%s\n",ft_strchr("This is just a string",'s'));
}*/
