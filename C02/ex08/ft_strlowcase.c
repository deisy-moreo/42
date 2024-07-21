/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:26:08 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/18 17:36:05 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}i++;
	}
	return (str);
}

int	main()
{
	char str[] = "Hello WoRLD!";
	printf("Original: %s\n", str);
	printf("Modificado: %s\n", ft_strlowcase(str));
	return (0);
}
