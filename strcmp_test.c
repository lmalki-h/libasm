#include "libasm.h"

int		test_ft_strcmp(char *s1, char *s2)
{
	int		test_failed;
	int 	my_strcmp;
	int 	real_strcmp;

	test_failed = 0;
	my_strcmp = ft_strcmp(s1, s2);
	real_strcmp = strcmp(s1, s2);
	if (real_strcmp != my_strcmp)
		test_failed = 1;
	printf("my strcmp: %i vs real strcmp %i\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	return (test_failed);
}

int		tests_ft_strcmp(void)
{
	int		tests_failed;

	tests_failed = 0;
	printf("------------ ft_strcmp ------------\n");
	tests_failed += test_ft_strcmp("this is a test", "this is a test");
	//tests_failed += test_ft_strcmp("this is a test with NULL", NULL);
	//tests_failed += test_ft_strcmp(NULL, "this is another test with NULL");
	tests_failed += test_ft_strcmp("", "");
	tests_failed += test_ft_strcmp("will this test work?", "");
	//tests_failed += test_ft_strcmp(NULL, NULL);
	tests_failed += test_ft_strcmp("a", "a");
	tests_failed += test_ft_strcmp("", "will this correction work?");
	tests_failed += test_ft_strcmp("this is a loooooooooongue test that should work", "this is a loooooooooongue test that should work");
	printf("\n\n");
	return (tests_failed);
}
