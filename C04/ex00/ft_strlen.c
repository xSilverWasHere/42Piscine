/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:36:50 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/05 11:43:03 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
	printf("String Characters: %d \n", ft_strlen(argv[1]));
	}
	else
	{
	printf ("Please insert only a string between double quotes\n");
	printf ("unless it has just one word!!!\n");
	}
}*/
