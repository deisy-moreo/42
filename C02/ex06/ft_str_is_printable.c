/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:31:57 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/17 21:17:23 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//Crea una función que devuelva 1 si el string usado como parámetro contiene única-
//mente caracteres imprimibles y devuelva 0 si contiene otro tipo de caracteres.
//• El prototipo de la función deberá ser el siguiente:
//int ft_str_is_printable(char *str);
//• Tendrá que devolver 1 si str es un string vacío.

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return 1;
	}
	while(str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int	main()
{
	printf("%d\n", ft_str_is_printable("Hello, World!"));
	printf("%d\n", ft_str_is_printable("Hello\nWorld!"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("Hello\tWorld!"));
	return (0);
}
