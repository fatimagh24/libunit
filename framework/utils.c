/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:35:09 by yaltayeh          #+#    #+#             */
/*   Updated: 2025/07/19 23:35:25 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_test_lst	*pop_test(t_unit *unit)
{
	t_test_lst	*test;

	test = unit->head;
	if (!test)
		return (NULL);
	if (test == unit->tail)
		unit->tail = NULL;
	unit->head = unit->head->next;
	test->next = NULL;
	return (test);
}

void	clean_tests(t_unit *unit)
{
	t_test_lst	*test;

	test = pop_test(unit);
	while (test)
	{
		free(test);
		test = pop_test(unit);
	}
}
