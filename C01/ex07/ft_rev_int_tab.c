/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:31:00 by oimzilen          #+#    #+#             */
/*   Updated: 2024/06/28 22:39:57 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	s;
	int	e;

	s = 0;
	e = size - 1;
	while (s < e)
	{
		temp = tab[s];
		tab[s] = tab[e];
		tab[e] = temp;
		s++;
		e--;
	}
}
