/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngelline <vngelline@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:37:21 by vngelline         #+#    #+#             */
/*   Updated: 2024/03/02 18:12:03 by vngelline        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int y_count, int x_count)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (x <= x_count)
	{
		while (y <= y_count)
		{
			if (((x == 1) && (y == 1)) || ((x == x_count) && (y == y_count)))
			    ft_putchar('/');
            else if (((x == x_count) && (y == 1)) || ((y == y_count) && (x == 1)))
			    ft_putchar('\\');
            else if ((((1 < y) && (y < y_count)) && ((x == 1) || (x == x_count))))
                ft_putchar('*');
            else if ((((1 < x) && (x < x_count)) && ((y == 1) || (y == y_count))))
                ft_putchar('*');
            else
                ft_putchar(' ');
            y++;
		}
        ft_putchar('\n');
        x++;
        y=1;
	}
}

int main(void) 
{
    rush(5,3);
    return (0);
}
