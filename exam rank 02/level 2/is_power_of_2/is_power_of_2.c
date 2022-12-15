/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:48:54 by esordone          #+#    #+#             */
/*   Updated: 2022/12/15 15:17:15 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
int	is_power_of_2(unsigned int n)
{
	int	i;

	i = 1;
	if (!n)
		return (0);
	while (i)
	{
		if ((n % 2) == 0)
		{
			return (1);
		}
		n = n * 2;
	}
	return (0);
}
*/
int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return ((n & (-n)) == n ? 1: 0);
}
