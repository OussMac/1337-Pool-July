/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:48:41 by oimzilen          #+#    #+#             */
/*   Updated: 2024/07/07 13:22:12 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb;
	if (nb != 0 && power > 0)
	{
		while (i < power)
		{
			nb *= temp;
			i++;
		}
		return (nb);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
