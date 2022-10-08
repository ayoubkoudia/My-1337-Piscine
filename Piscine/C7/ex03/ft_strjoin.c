/* ************************************************************************** */
/*		                                                                    */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:33:01 by akoudia           #+#    #+#             */
/*   Updated: 2022/04/11 12:51:37 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	fslen(char *sep, char **s, int size)
{
	int	flen;
	int	i;

	i = 0;
	flen = 0;
	while (i < size)
	{
		flen += ft_strlen(s[i]);
		i++;
	}
	flen += (ft_strlen(sep) * (size - 1) + 1);
	return (flen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ns;
	int		i;

	if (size == 0)
		return (malloc(sizeof(char)));
	ns = malloc(fslen(sep, strs, size) * sizeof(char) + 1);
	if (!ns)
		return (0);
	*ns = 0;
	i = 0;
	while (i < size)
	{
		if (i == size - 1)
		{
			ft_strcat(ns, strs[i]);
			break ;
		}
		ft_strcat(ns, strs[i]);
		ft_strcat(ns, sep);
		i++;
	}
	return (ns);
}
