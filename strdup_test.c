#include "libasm.h"

int	test_ft_strdup(char *s, int test_nb)
{
	char *my_strdup;
	char *real_strdup;
	int	test_failed;

	test_failed = 0;
	my_strdup = ft_strdup(s);
	real_strdup = strdup(s);
	printf("test %i: my_strdup [%s] vs real strdup [%s]\n", test_nb, my_strdup, real_strdup);
	if (strcmp(my_strdup, real_strdup) != 0)
		test_failed = 1;
	free(my_strdup);
	free(real_strdup);
	return (test_failed);
}
int	tests_ft_strdup(void)
{
	int	tests_failed;
	int	i;
	char	**arg_tests;

	i = 0;
	arg_tests = get_string_test();
	tests_failed = 0;
	printf("---------- ft_strdup -----------\n");
	while (i < TOTAL_STRING_TEST)
	{
		tests_failed += test_ft_strdup(arg_tests[i], i);
		i++;
	}
	free(arg_tests);
	printf("\n\n");
	return (tests_failed);
}
