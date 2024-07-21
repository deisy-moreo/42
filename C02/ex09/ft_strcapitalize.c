/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:40:50 by dmoreno           #+#    #+#             */
/*   Updated: 2024/07/18 17:55:24 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
        int     i;  
        int     new_word;
    
        i = 0;
        new_word = 1; //Bandera para indicar el inicio de una nueva palabra
        while (str[i] != '\0')
        {       //Convertir a minúscula si es mayúscula
                if (str[i] >= 'A' && str[i] <= 'Z')
                {   
                        str[i] += 32; 
                }   
                // Si es el inicio de una palabra y es minúscula, convertir a mayúscula
                if (new_word && str[i] >= 'a' && str[i] <= 'z')
                {   
                        str[i] -= 32; 
                        new_word = 0;
                }   
                //Verificar si el caracter actual es una delimitador (no alfabetico o numerico)
                if (!(str[i] >= 'a' && str[i] <= 'z') &&  
                    !(str[i] >= 'A' && str[i] <= 'Z') &&
                    !(str[i] >= '0' && str[i] <= '9'))
                {   
                        new_word = 1;
                }   
                else
                {   
                        new_word = 0;
                }   
                i++;
        }   
        return (str);
}

//Si es inicio de cade ponlo en mayuscula
//Si te encuentras un espacio o simbolo transforma a mayuscula

int     main(void)
{
        char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
        printf("Cadena original: %s\n", str);
        printf("Cadena modificada: %s\n", ft_strcapitalize(str));
        return (0);
}
