/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:46:09 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:04:12 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"
#include <stdio.h>
#include <stdlib.h>

int	load_test(t_unit *unit, char *test_name, int (*test_func)(void))
{
	t_test_lst	*test;

	test = ft_calloc(1, sizeof(t_test_lst));
	if (!test)
		return (-1);
	test->test_name = test_name;
	test->test_func = test_func;
	test->next = NULL;
	if (unit->head == NULL)
		unit->head = test;
	if (unit->tail)
		unit->tail->next = test;
	unit->tail = test;
	return (0);
}
