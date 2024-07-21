/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruciones.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:19:17 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/10 12:39:42 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	function_1(int variable_1, int variable_2)
{
	int	variable_3;

	variable_3 = variable_1 + variable_2;
	return (variable_3);
}

/*
   The program always starts with main function
  */
int	main(void)
{
	int	a;
	int	b;

	b = 5;
	a = function_1(b, 2);
	return (0);
}
