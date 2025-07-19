/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_reblace_ascii_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:26 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 15:35:29 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "libunit.h"
#include "strmapi_test.h"

int	replace_ascii_test(void)
{
	if (ft_strcmp(ft_strmapi("abcdef", index_mod_10), "012345") == 0)
		return (0);
	else
		return (-1);
}
