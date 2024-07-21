/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:31:11 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/17 16:09:55 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//Crea una función que devuelva 1 si el string usado como parámetro contiene úni-
//camente caracteres alfabéticos en minúsculas y devuelva 0 si contiene otro tipo de
//caracteres.
//• El prototipo de la función deberá ser el siguiente:
//int ft_str_is_lowercase(char *str);
//• Tendrá que devolver 1 si str es un string vacío.


int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		return 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}else
		{
		  return 0;
		}
	} return 1;
}


int	main(void)
{
	printf("%d",ft_str_is_lowercase("adfgth"));
	return (0);
}
