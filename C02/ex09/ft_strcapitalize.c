/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 04:53:32 by oimzilen          #+#    #+#             */
/*   Updated: 2024/06/30 14:09:10 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	space_ola_klma(int *lbdya, int i, char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	lbdya;

	i = 0;
	lbdya = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		lbdya = space_ola_klma(&lbdya, i, str);
		i++;
	}
	return (str);
}

char	space_ola_klma(int *lbdya, int i, char *str)
{
	if ((str[i] >= 'a' && str [i] <= 'z')
		|| (str[i] >= '0' && str[i] <= '9'))
	{
		if (*lbdya && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			*lbdya = (0);
		}
		*lbdya = (0);
	}
	else
	{
		*lbdya = (1);
	}
	return (*lbdya);
}
