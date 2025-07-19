/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty_str_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:35 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 15:35:37 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "strmapi_test.h"
#include "include/libft.h"

int empty_str_test(void)
{
    if (ft_strcmp(ft_strmapi("", space_to_underscore), "") == 0)
        return (0);
    else
        return (-1);
}
