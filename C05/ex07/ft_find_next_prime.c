/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 02:15:24 by oimzilen          #+#    #+#             */
/*   Updated: 2024/07/10 02:55:40 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int prime)
{
	int	i;

	i = 3;
	if (prime <= 1)
	{
		return (2);
	}
	else if (prime == 2)
	{
		return (prime);
	}
	else if (prime % 2 == 0)
	{
		return (0);
	}
	while (i < prime)
	{
		if (prime % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (prime);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
		}
		nb++;
	}
	return (nb);
}
