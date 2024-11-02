/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <oimzilen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:45:48 by oimzilen          #+#    #+#             */
/*   Updated: 2024/07/14 04:56:39 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	ft_swap(char **s1, char **s2, int *swapped)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	*swapped = 1;
}

void	ft_print_params(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int		i;
	int		swapped;

	swapped = 1;
	if (ac > 1)
	{
		while (swapped)
		{
			i = 1;
			swapped = 0;
			while (i < ac - 1)
			{
				if (ft_strcmp(av[i], av[i + 1]) > 0)
				{
					ft_swap(&av[i + 1], &av[i], &swapped);
				}
				i++;
			}
		}
		ft_print_params(ac, av);
	}
	return (0);
}
