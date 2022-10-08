/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:23:01 by akoudia           #+#    #+#             */
/*   Updated: 2022/04/11 12:57:32 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str)
{
	int	nb;

	nb = 0;
	while (str[nb] != '\0')
	{
		nb++;
	}
	return (nb);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		taille;
	int		i;

	i = 0;
	taille = ft_strlen(src);
	str = (char *)malloc(sizeof(*str) * (taille + 1));
	while (i < taille)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
