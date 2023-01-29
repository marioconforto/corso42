/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:52:25 by mconfort          #+#    #+#             */
/*   Updated: 2023/01/25 20:17:12 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cp1;
	const unsigned char	*cp2;

	i = -1;
	cp1 = (unsigned char *)s1;
	cp2 = (unsigned char *)s2;
	while (++i <= n)
	{
		if (cp1[i] != cp2[i])
			return ((unsigned int)(cp1[i] - cp2[i]));
	}
	return (0);
}
