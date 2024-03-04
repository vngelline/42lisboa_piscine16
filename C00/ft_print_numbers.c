/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngelline <vngelline@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:37:21 by vngelline         #+#    #+#             */
/*   Updated: 2024/03/04 21:34:01 by vngelline        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(void) 
{
    int num = 48;
    while (num <= 57)
    {
        write(1, &num, 1);
        num++;
    }
}

int main(void)
{
    ft_is_negative();
}


