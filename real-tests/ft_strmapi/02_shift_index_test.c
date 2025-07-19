/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_shift_index_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:58 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 15:35:59 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "strmapi_test.h"
#include "include/libft.h"

int shift_index_test(void)
{
    if (ft_strcmp(ft_strmapi("abcd", shift_index), "bcde") == 0)
        return (0);
    else
        return (-1);
}
