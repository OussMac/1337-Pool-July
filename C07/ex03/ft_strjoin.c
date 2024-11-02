/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 23:00:01 by oimzilen          #+#    #+#             */
/*   Updated: 2024/07/16 00:24:37 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

void	ft_total(int size, int *total,	char *sep, char **strs)
{
	int	i;

	*total = 0;
	i = 0;
	while (i < size)
	{
		*total += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			*total += ft_strlen(sep);
		}
		i++;
	}
}

void	ft_linking(int size, char *ptr, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(ptr, sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*ptr;

	i = 0;
	if (size == 0)
	{
		ptr = (char *) malloc(sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[0] = '\0';
		return (ptr);
	}
	ft_total(size, &total, sep, strs);
	ptr = (char *) malloc(sizeof(char) * (total + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr[0] = '\0';
	ft_linking(size, ptr, strs, sep);
	return (ptr);
}
