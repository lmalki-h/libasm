/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 22:00:13 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/17 22:00:15 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int		test_ft_strcmp(char *s1, char *s2)
{
	int		test_failed;
	int		my_strcmp;
	int		real_strcmp;

	test_failed = 0;
	my_strcmp = ft_strcmp(s1, s2);
	real_strcmp = strcmp(s1, s2);
	if (real_strcmp != my_strcmp)
		test_failed = 1;
	printf("my_strcmp: %i vs real_strcmp %i\n", ft_strcmp(s1, s2),
	strcmp(s1, s2));
	return (test_failed);
}

int		tests_ft_strcmp(void)
{
	int		tests_failed;

	tests_failed = 0;
	printf("------------ ft_strcmp ------------\n");
	tests_failed += test_ft_strcmp("this is a test", "this is a test");
	tests_failed += test_ft_strcmp("", "");
	tests_failed += test_ft_strcmp("will this test work?", "");
	tests_failed += test_ft_strcmp("a", "a");
	tests_failed += test_ft_strcmp("", "will this correction work?");
	tests_failed += test_ft_strcmp("this is a looooongue test that should work",
	"this is a looooongue test that should work");
	printf("\n\n");
	return (tests_failed);
}
