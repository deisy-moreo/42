/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:20:44 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/25 15:32:24 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == '\0')
	{
		return (0);
	}
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*int	main(void)
{
	int result;
	int i = 4;
	char s1[] = "xale";
	char s2[] = "oalw";
	result = ft_strncmp(s1, s2, i);
	
	if (result == 0)
		printf ("\"%s\" is identical to \"%s\"\n", s1, s2);
	else if (result < 0)
		printf ("\"%s\"is less than \"%s\"\n", s1, s2);
	else
		printf ("\"%s\" is greater than \"%s\"\n", s1, s2);
	return (0); 
}*/
