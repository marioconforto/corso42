/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:51:13 by mconfort          #+#    #+#             */
/*   Updated: 2023/02/01 19:34:40 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		start = ft_strlen(s);
	if (len + start >= ft_strlen(s))
		len = ft_strlen(s) - start;
	dest = (char *) malloc (sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (len--)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

int main()
{
	printf("%s\n",ft_substr("this is a string",2,5));
	return (0);
}
