/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:03:17 by esordone          #+#    #+#             */
/*   Updated: 2022/12/14 16:52:55 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	espai;
	char	*str;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
				espai = 1;
			if (!(str[i] == ' ') || str[i] == '\t')
			{
				if (espai)
					write (1, " ", 1);
				espai = 0;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
