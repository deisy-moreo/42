/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:55:34 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/15 17:12:26 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	resultado;
	int	resto;

	resultado = a / b;
	*div = resultado;
	resto = a % b;
	*mod = resto;
}
/*int	main()
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	prueba1;
	int	prueba2;
	
	div = &prueba1;
	mod = &prueba2;
	a = 50;
	b = 2;
	ft_div_mod(a, b, div, mod);
	return(0);
}
*/
