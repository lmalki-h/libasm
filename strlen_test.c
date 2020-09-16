#include "libasm.h"

char	**get_strlen_test(void)
{
	char	*tests;

	tests = (char **)malloc(sizeof(char *) * 5);
	tests[0] = "";
	tests[1] = "hello ici une phrase";
	tests[2] = "banana";
	tests[3] = "                     une phrase super loooooooooongue";
	tests[4] = NULL;
	return (tests);
}

int		tests_ft_strlen(void)
{
	int		tests_failed;
	int 	my_strlen;
	int 	real_strlen;
	int 	i;
	char 	**arg_test;

	i = 0;
	tests_failed = 0;
	arg_test = get_strlen_test();
	printf("-------------------- ft_strlen ---------------------\n");
	while (i < 5)
	{
		my_strlen = ft_strlen(arg_test[i]);
		real_strlen = strlen(arg_test[i]);
		if (real_strlen != my_strlen)
			tests_failed += 1;
		printf("test %i: my strlen: %i vs real strlen %i\n", i, ft_strlen(arg_test[i]), strlen(arg_test[i]));
		i++;
	}
	return (tests_failed);
}
