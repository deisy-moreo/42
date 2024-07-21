/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:20:15 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/15 17:14:57 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*int	main(void)
{
	char	my_str[14];
	int		length;

	strcpy(my_str, "Hola, piscine");
	length = ft_strlen(my_str);
	printf("La logitud de la cadena es: %d\n", length);
	return (0);
}*/
