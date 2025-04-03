/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:11:44 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/08 09:12:06 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = 0;
	while (s1[cmp] != '\0' && s2[cmp] != '\0')
	{
		if (s1[cmp] == s2[cmp])
		{
			cmp++;
		}
		else
		{
			return (s1[cmp] - s2[cmp]);
		}
	}
	return (s1[cmp] - s2[cmp]);
}
/*
#include <stdio.h>
//#include <string.h>

int	main(void)
{
	char	*string1;
	char	*string2;
	
	string1 = "hello";
	string2 = "hello";
	//printf ("%i\n", strcmp(string1, string2));
	printf ("%i\n", ft_strcmp(string1, string2));
}*/
