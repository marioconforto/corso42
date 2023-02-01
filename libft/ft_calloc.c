/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:35:32 by mconfort          #+#    #+#             */
/*   Updated: 2023/02/01 19:46:47 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	len = count * size;
	ptr = (size_t *) malloc (len);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}
