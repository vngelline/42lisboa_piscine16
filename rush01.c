/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngelline <vngelline@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:37:21 by vngelline         #+#    #+#             */
/*   Updated: 2024/03/03 15:01:51 by vngelline        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void	ft_putchar(char c);

int	check_errors(int y_count, int x_count)
{
	if ((y_count <= 0) || (y_count >= 6) || (x_count <= 0) || (x_count >= 6))
		fprintf(stdout, "Please enter numbers between 1 and 5\n" );
	return (1);
}

void	print_char(int y_count, int x_count, int x, int y)
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
}

void	rush(int y_count, int x_count)
{
	int	x;
	int	y;

	check_errors(y_count, x_count);
	x = 1;
	y = 1;
	while (x <= x_count)
	{
		while (y <= y_count)
		{
			print_char(y_count, x_count, x, y);
			y++;
		}
		ft_putchar('\n');
		x++;
		y = 1;
	}
}

