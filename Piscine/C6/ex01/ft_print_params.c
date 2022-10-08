/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:11:11 by akoudia           #+#    #+#             */
/*   Updated: 2022/04/04 16:41:04 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	s;
	int	c;

	if (argc > 1)
	{
		s = 1;
		while (s < argc)
		{
			c = 0;
			while (argv[s][c])
			{
				write(1, &argv[s][c], 1);
				c++;
			}
			write(1, "\n", 1);
			s++;
		}
	}
	return (0);
}
