/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngelline <vngelline@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:37:21 by vngelline         #+#    #+#             */
/*   Updated: 2024/03/04 21:32:59 by vngelline        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n) 
{
    
    char N = 'N';
    char P = 'P';
    
    if (n < 0)
        write(1, &N, 1);
    else if (n >= 0)
        write(1, &P, 1);
}

int main(void)
{
    ft_is_negative(-124);
    return 0;
}
