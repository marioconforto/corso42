/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:10:49 by mconfort          #+#    #+#             */
/*   Updated: 2023/01/29 18:02:31 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	i = 0;
	if (s2 > s1)
	{
		while (len--)
			s1[len] = s2[len];
	}
	else
	{	
		while (i <= len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dst);
}
