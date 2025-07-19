/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_replace_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:41:03 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 15:41:06 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "strmapi_test.h"
#include "include/libft.h"

int replace_chars_test(void)
{
    if (ft_strcmp(ft_strmapi("hello world hi", space_to_underscore), "hello_world_hi") == 0)
        return (0);
    else
        return (-1);
}
