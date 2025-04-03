/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:22:15 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/07 11:23:09 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	str;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	str = (nb % 10) + '0';
	write(1, &str, 1);
}
/*
#include<stdlib.h>

int main(int	argc, char	**argv)
{
	if(argc == 2)
		{
		ft_putnbr(atoi(argv[1]));
		write(1, "\n", 1);
		}
	else
		write(1, "Erro!\n", 6);
}*/
