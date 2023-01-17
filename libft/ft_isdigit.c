/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:15:58 by mconfort          #+#    #+#             */
/*   Updated: 2023/01/17 20:32:10 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
#include<ctype.h>*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n", isdigit('f'));
	printf("%d\n", ft_isdigit('f'));
}*/
