/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:39:42 by mconfort          #+#    #+#             */
/*   Updated: 2023/01/29 18:10:11 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
//int	main()
//{
//	char dst[11];
//	memset(dst,'r', 11);
//	printf("%zu\n", ft_strlcpy(dst, "ciao bimbo", 11));
//	printf("%lu\n", strlcpy(dst, "ciao bimbo", 11));
//	printf("%s\n", dst);
//	return (0);
//}
