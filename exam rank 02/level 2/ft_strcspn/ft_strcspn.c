/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:12:40 by esordone          #+#    #+#             */
/*   Updated: 2023/01/09 14:28:28 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	n;

	i = 0;
	while (s[i] != '\0')
	{
		n = 0;
		while (reject[n] != '\0')
		{
			if (s[i] == reject[n])
				return (i);
			n++;
		}
		i++;
	}
	return (i);
}
