/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:16:37 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 15:33:34 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "strmapi_test.h"
#include "include/libft.h"

int toupper_test(void)
{
    if (ft_strcmp(ft_strmapi("hello", to_upper_mapper), "HELLO") == 0)
        return (0);
    else
        return (-1);
}
