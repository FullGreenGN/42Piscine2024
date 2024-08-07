/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joudart- <joudart-@student.42perpignan.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:15:05 by joudart-          #+#    #+#             */
/*   Updated: 2024/08/07 19:22:13 by joudart-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int	*mal;

	i = 0;
	mal = malloc(sizeof(int) * (max - min) -  1);
	if (mal == NULL)
		return (NULL);
	while (max > min)
	{
		mal[i] = min;
		min++;
		i++;
	}
	return (mal);
}