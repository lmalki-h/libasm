/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 22:00:26 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/17 22:00:28 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int		test_ft_strcpy(char *s, int test_nb)
{
	int		test_failed;
	char	*my_strcpy;
	char	*real_strcpy;

	test_failed = 0;
	my_strcpy = (char *)malloc(sizeof(char) * (strlen(s) + 1));
	real_strcpy = (char *)malloc(sizeof(char) * (strlen(s) + 1));
	ft_strcpy(my_strcpy, s);
	strcpy(real_strcpy, s);
	printf("test %i: my_strcpy [%s] vs real strcpy [%s]\n", test_nb, my_strcpy,
	real_strcpy);
	if (strcmp(my_strcpy, real_strcpy) != 0)
		test_failed = 1;
	free(my_strcpy);
	free(real_strcpy);
	return (test_failed);
}

int		tests_ft_strcpy(void)
{
	int		tests_failed;
	char	**arg_test;
	int		i;

	i = 0;
	arg_test = get_string_test();
	tests_failed = 0;
	printf("----------- ft_strcpy ----------\n");
	while (i < TOTAL_STRING_TEST)
	{
		tests_failed += test_ft_strcpy(arg_test[i], i);
		i++;
	}
	free(arg_test);
	printf("\n\n");
	return (tests_failed);
}
