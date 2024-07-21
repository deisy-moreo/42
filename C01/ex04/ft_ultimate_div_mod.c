/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:39:05 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/15 17:13:39 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 100;
	b = 2;
	printf("Antes: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod (&a, &b);
	printf("Después: a = %d, b = %d\n", a, b);
	return (0);
}*/
