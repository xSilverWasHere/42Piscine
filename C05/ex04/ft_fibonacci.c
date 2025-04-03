/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:41:04 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/09 14:43:10 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci (index -1) + ft_fibonacci (index - 2));
}
/*
int	main(void)
{
	int	index;

	index = 5;
	printf("%d", ft_fibonacci(index));
	return (0);
}*/
