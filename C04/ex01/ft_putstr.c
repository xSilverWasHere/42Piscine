/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:44:51 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/05 11:52:46 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str);

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
int	main(int argc, char	**argv)
{
	if(argc == 2)
	{
	ft_putstr(argv[1]);
	}
	else
	{
	printf ("Please insert only a string between double \n");
	printf ("quotes unless it has just one word!!!\n");
	}
}*/
