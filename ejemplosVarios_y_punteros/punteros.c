/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   punteros.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:45:56 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/12 15:09:42 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int num =21;
int *num_ptr;

num_ptr = &num;
*num_ptr = 22;

//Otros ej.
//Declramos 2 variables y 2 puteros 
int numA = 21;
int numB = 22;
int *num_ptr1, *num_ptr2: //estos 2 ptr apuntan a nteros

num_ptr1 = &numA; //asignamos el valor a la variable num_ptr1, y le damos el valor de la direccion de la variable numA
		  //AHORA YA SE PUEDE DECCIR QE ESTE PUN APUNTA A LA VARIABLE num_A


//Al puntero num_ptr2  lo vamos a igualr al valor del puntero num_ptr1
num_ptr2 = mum_ptr1

//AHORA AMBOS UNTEROS ESTAN APUNTANDO A LA VARIABLE numA
//Más de un puntero pude apuntar al mismo objeto en memoria

//Ahora queremos acceder al objeto de memoria que apunta *num_ptr2 = 33;
*num_ptr2 = 33;

//Por ultimo a la variable a la variable numB le asignamos el valor de l variable a la que apunta el puntero *num_ptr2

numB = *num_ptr2;

