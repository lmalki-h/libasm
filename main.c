#include "libasm.h"

int	main(void)
{
	int	test_run;
	int	total_test;
	char	*a;
	char	*b;
	char	*c;
	char	*d;
	char	*e;

	d = "banana";
	e = "banane";
	a = "ab\n\n";
	b = "kikoulol\\0";
	c = " 01234567890 AAAAAAA abc\xba e , ..........., end of string";
	test_run = 0;
	total_test = 3;
	if (ft_strlen(a) != strlen(a)) //small string
	{
		printf("ft_strlen did not return 3\n");
		return (0);
	}
	test_run += 1;
	if (ft_strlen(b) != strlen(b)) // string that contains
	{
		printf("ft_strlen does not work with \\0");
		return (0);
	}
	test_run += 1;
	if (ft_strlen(c) != strlen(c)) // string that contains
	{
		printf("ft_strlen does not work with \\0");
		return (0);
	}
	test_run += 1;
	printf("%d tests passed out of %d\n", test_run, total_test);
	//
	printf("%li\n", ft_write(1, c, ft_strlen(c)));
	ft_write(1, c, 56);
	
	/*if (ft_strcmp(d, d) != strcmp(d, d))
	{
		printf(" 1 ft_strcmp returns %i  should return %i\n", ft_strcmp(d, d), strcmp(d, d));
		return (0);
	}
	if (ft_strcmp(d, e) != strcmp(d, e))
	{

		printf("ft_strcmp returns %i  should return %i\n", ft_strcmp(d, e), strcmp(d, e));
		return (0);
	}
	if (ft_strcmp(e, d) != strcmp(e, d))
	{
		printf("ft_strcmp should return 1\n");
		return (0);
	}*/
	return (0);
}
