/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:54:38 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/17 21:54:43 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int		main(void)
{
	int		tests_failed;

	tests_failed = 0;
	tests_failed += tests_ft_strlen();
	tests_failed += tests_ft_write();
	tests_failed += tests_ft_read();
	tests_failed += tests_ft_strcmp();
	tests_failed += tests_ft_strcpy();
	tests_failed += tests_ft_strdup();
	printf("\n%i tests failed\n", tests_failed);
	return (0);
}
