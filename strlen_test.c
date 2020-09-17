/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:59:56 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/17 21:59:58 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

char	**get_string_test(void)
{
	char	**tests;

	tests = (char **)malloc(sizeof(char *) * 5);
	tests[0] = "";
	tests[1] = "hello ici une phrase";
	tests[2] = "banana";
	tests[3] = "une phrase super loooooooooongue";
	tests[4] = NULL;
	return (tests);
}

int		test_ft_strlen(char *s, int test_nb)
{
	int		my_strlen;
	int		real_strlen;
	int		test_failed;

	test_failed = 0;
	my_strlen = ft_strlen(s);
	real_strlen = strlen(s);
	printf("test %i: my strlen: %zu vs real strlen %zu\n", test_nb,
	ft_strlen(s), strlen(s));
	if (real_strlen != my_strlen)
		test_failed = 1;
	return (test_failed);
}

int		tests_ft_strlen(void)
{
	int		tests_failed;
	int		i;
	char	**arg_test;

	i = 0;
	tests_failed = 0;
	arg_test = get_string_test();
	printf("-------------------- ft_strlen ---------------------\n");
	while (i < TOTAL_STRING_TEST)
	{
		tests_failed += test_ft_strlen(arg_test[i], i);
		i++;
	}
	free(arg_test);
	printf("\n\n");
	return (tests_failed);
}
