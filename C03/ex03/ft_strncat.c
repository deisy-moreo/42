/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:29:42 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/25 15:26:01 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main ()
{
	char src[] = "Dedee";
	char dest[] = "Moreno"; //Aquí se podría poner la cantidad de espacio
				//en dest
	ft_strncat(dest,src, 2); // Concatenar los primeros 2 caracteres de `src`
				 // a `dest`
	printf("Cadena resultante: %s", dest);
	return (0);
}*/
