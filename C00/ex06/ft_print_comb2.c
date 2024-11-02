/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:33:28 by oimzilen          #+#    #+#             */
/*   Updated: 2024/06/27 12:19:56 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_tqsasotstif(int num1, int num2)
{
	ft_putchar(num1 / 10 + '0');
	ft_putchar(num1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(num2 / 10 + '0');
	ft_putchar(num2 % 10 + '0');
}

void	ft_lastnumbers(int num1, int num2)
{
	if (num1 != 98 || num2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_tqsasotstif(num1, num2);
			ft_lastnumbers(num1, num2);
			num2++;
		}
		num1++;
	}
}
