/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:42:09 by akoudia           #+#    #+#             */
/*   Updated: 2022/04/06 22:45:49 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	factorial = 1;
	i = 0;
	while (i++ < nb)
		factorial *= i;
	return (factorial);
}
