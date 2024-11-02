/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:16:10 by oimzilen          #+#    #+#             */
/*   Updated: 2024/07/09 23:22:22 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (nb != 0 && power > 0)
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
	else if (power < 0)
	{
		return (0);
	}
	return (0);
}
