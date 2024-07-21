/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:04:02 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/17 14:56:51 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//Crea una función que devuelva 1 si el string usado como parámetro contiene única-    
//mente dígitos y devuelva 0 si contiene otro tipo de caracteres.
//• El prototipo de la función deberá ser el siguiente:
//
//Tendrá que devolver 1 si str es un string vacío.

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\n')
		{	
			return 1;
		}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		} 
		else	
			return 0;
	}
	return 1;
}

int	main(void)
{
	printf("%d", ft_str_is_numeric("12345"));
}

