/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:43:40 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/17 23:02:15 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//• Crea una función que ponga cada letra en mayúscula.
//• El prototipo de la función deberá ser el siguiente:
//char *ft_strupcase(char *str);
//• Deberá devolver str.

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[];

	str[] = "hola mundo";
	printf ("%s\n", ft_strupcase(str));
	return (0);
}
