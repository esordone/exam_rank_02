/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:33:35 by esordone          #+#    #+#             */
/*   Updated: 2022/12/15 14:43:54 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	number_written(int num)
{
//	char	c;
	char	str[10] = "0123456789";

	if (num > 9)
	{
		number_written (num / 10);
//		c = num + '0';
//		write (1, &c, 1);
		write (1, &str[num % 10], 1);
	}
	if (num <= 9)
	{
		write (1, &str[num % 10], 1);
	}
//	write (1, "\n", 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while ( i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			write (1, "fizzbuzz", 8);
			//write (1, "\n", 1);
		}
		else if ((i % 3) == 0)
		{
			write (1, "fizz", 4);
			//write (1, "\n", 1);
		}
		else if ((i % 5) == 0)
		{
			write (1, "buzz", 4);
			//write (1, "\n", 1);
		}
		else
			number_written(i);
			write (1, "\n", 1);
	i++;
	}
	return (0);
}
