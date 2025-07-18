int	ft_popen(char **argv, char mode);

int	invalid_mode_test(void)
{
	char	*argv[2];

	argv[0] = "grep";
	argv[1] = "AAAA";
	if (ft_popen(argv, 'c') == -1)
		return (0);
	else
		return (-1);
}
