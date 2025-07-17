/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 12:22:16 by fghanem           #+#    #+#             */
/*   Updated: 2025/03/22 12:23:05 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	if (!(*little))
	{
		return ((char *)(b));
	}
	while (*b)
	{
		if (strncmp(b, l, strlen(l)) == 0)
		{
			return ((char *)b);
		}
		b++;
	}
	return (NULL);
}
