/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:43:30 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/25 15:37:45 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*str_resul;

	i = 0;
	j = 0;
	str_resul = 0;
	if (to_find == NULL || to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (str_resul);
}

/*int	main (void)
{
	char str[] = "Hola, mundo!";
	char to_find[] = "mundo";
	char *str_resul = ft_strstr(str, to_find);
	if (str_resul != NULL)
	{
		printf("Cadena encontrada: %s\n", str_resul);
	}else{
		printf("Cadena no encontrada. \n");
	}
	return (0);
}*/
