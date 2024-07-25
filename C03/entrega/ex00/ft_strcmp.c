/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:19:26 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/25 15:29:06 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			++i;
			return (0);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
	return (0);
}

/*int	main()
{
	char *s1;
	char *s2;
	int	num;

	s1 = "Pepita";
    s2 = "Pepitas";
	num = ft_strcmp (s1, s2);
	printf("%d ",num);
		if(ft_strcmp (s1, s2) == 0)
		printf("Las cadenas son iguales. \n");
	else
		printf("Las cadenas son distintas. \n");
	return (0);
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char	nombre[20] = "Jose"; //string de ma 20 caract. inicializada
	char	apellido[20] = "Perez";

	// Cadena == cadena2 -> 0
	
	//strcmp para comarar cadenas

	if (strcmp(nombre, apellido) == 0)
	{
		printf("Las cadenas son iguales. \n");
	}
	else
	{
		printf("Las cadenas NO son iguaes. \n");
	}

	system("PAUSE");
}*/
