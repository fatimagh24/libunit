/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_reblace_ascii_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:26 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:30:18 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"

int	replace_ascii_test(void)
{
	if (ft_strcmp(ft_strmapi("abcdef", index_mod_10), "012345") == 0)
		return (0);
	else
		return (-1);
}
