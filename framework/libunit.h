/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:46:05 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:36:01 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GRN   "\033[32m"
# define MAG "\033[35m"

typedef struct s_test_lst
{
	char				*test_name;
	int					(*test_func)(void);
	pid_t				pid;
	int					status;
	struct s_test_lst	*next;
}						t_test_lst;

typedef struct s_unit
{
	char				*function_name;
	int					success_tests;
	int					total_tests;
	t_test_lst			*head;
	t_test_lst			*tail;
}						t_unit;

void					load_unit(t_unit *unit, char *func_name);
int						load_test(t_unit *unit, char *test_name,
							int (*test_func)(void));
int						launch_tests(t_unit *unit);
t_test_lst				*pop_test(t_unit *unit);
void					clean_tests(t_unit *unit);
char					shift_index(unsigned int i, char c);
char					index_mod_10(unsigned int i, char c);
char					invert_case(unsigned int i, char c);
char					space_to_underscore(unsigned int i, char c);
char					to_upper_mapper(unsigned int i, char c);

#endif // LIBUNIT_H
