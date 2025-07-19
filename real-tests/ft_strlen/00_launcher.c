/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:45:18 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 13:50:29 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "libunit.h"
#include "strlen_test.h"

int	strlen_launcher(void)
{
	t_unit	*testlist;

	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "SEGFAULT test", &segfault_test);
	load_test(&testlist, "Big text test", &big_text_test);
	return (launch_tests(&testlist));
}
