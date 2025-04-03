/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:12:59 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/08 09:13:15 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	int	l;
	int	i;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int	argc,char	**argv)
{
	if (argc == 3)
	{
	printf ("%s\n", ft_strcat(argv[1], argv[2]));
	}
	else
	{
	printf ("Error: Please insert only two strings");
	printf ("string separated by SPACE and between double quotes!\n");
	}
}*/
