/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:29:55 by mel-abde          #+#    #+#             */
/*   Updated: 2024/06/29 19:30:46 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "test.h"

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (( i == 0 && j == 0) || (i == 0 && j == x-1) || 
				(i == y-1 && j == 0) || (i == y-1 && j == x-1))
				ft_putchar('o');
			else if (( i == 0 && j > 0) || (i == y-1 && j > 0))
				ft_putchar('-');
			else if (( i > 0 && j == 0) || ( i > 0 && j == x-1))
				ft_putchar('|');
			else 
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}	
}
