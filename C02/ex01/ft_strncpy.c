/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:11:57 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/16 15:04:08 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = (0);
	while (i <n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n )
	{
		dest[i++] = '\0';
	}
	return (0);
}

int	main(void)
{
	char	dest[10];
	char	src[] = "Hola";
	ft_strncpy(dest, src, 10);
	printf("Destino: %s\n", dest);
	return (0);
}
