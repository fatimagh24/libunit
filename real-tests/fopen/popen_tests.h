#ifndef POPEN_TESTS_H
# define POPEN_TESTS_H

int	ft_popen(char **argv, char mode);

int	invalid_mode_test(void);
int	invalid_command_test(void);
int	invalid_args_test(void);

#endif // POPEN_TESTS_H