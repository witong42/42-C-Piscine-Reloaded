/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:05:43 by witong            #+#    #+#             */
/*   Updated: 2024/05/15 16:13:37 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
