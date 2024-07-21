/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:43:31 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/15 17:24:41 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main(void)
{
	int a;

	a = 20;

	int b;

	b = 10;

	int *ptr_a;
       	int *ptr_b;

	ptr_a = &a;
	ptr_b = &b;

ft_swap(ptr_a, ptr_b);
return (0);
}*/
