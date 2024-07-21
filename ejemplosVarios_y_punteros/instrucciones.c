/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instrucciones.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:20:45 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/10 14:39:25 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	calculos_and_return(int a, int b)
{
	return (a + b);
}

void	assignment(void)
{
	int	a;

	a = 44;

	int	b;
	
	b = -2;

	int	c;
	
	c = 'A';
	{
		a = calculos_and_return(a, b);
		b = (a - 2) * 2;
	}
}

void call_function(void)
{
	int forty_two;

	forty_two = 42;
}

char condition (int nb)
{
	if (nb < 10)
	{
		nb = nb +1;
	}
	if (nb < 10)
	{
		return ('1');
	}
	else
	{
		return ('2');
	}
}	

void loo(void)
{
	int	i;
	
	i= 0;
	while (i <10)
	{
	i = i +1;
	}	

}

/*THE PROGRAM ALWAYS STARTS WHIT MAIN FUNCTION 
 */
int main(void)
{
	call_function();
	return (0);
}
