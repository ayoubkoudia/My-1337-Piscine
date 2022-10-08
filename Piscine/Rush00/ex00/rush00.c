/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:43:22 by akoudia           #+#    #+#             */
/*   Updated: 2022/03/26 14:44:03 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row(int x, int y, char *dix)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
			ft_putchar(dix[0]);
		else if (j == x)
			ft_putchar(dix[2]);
		else
			ft_putchar(dix[1]);
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		if (i == 1)
			print_row(x, y, "o-o");
		else if (i == y)
			print_row(x, y, "o-o");
		else
			print_row(x, y, "| |");
		ft_putchar('\n');
		i++;
	}
}
