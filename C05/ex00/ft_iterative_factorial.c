/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:25:10 by oimzilen          #+#    #+#             */
/*   Updated: 2024/07/07 11:21:51 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb;
	if (nb > 0)
	{
		while (i < temp)
		{
			nb *= i;
			i++;
		}
		return (nb);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (0);
}
