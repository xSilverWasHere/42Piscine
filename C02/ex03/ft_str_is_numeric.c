/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:15:55 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/02 16:16:04 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	l;

	l = 0;
	while ((str[l] != '\0'))
	{
		if (str[l] >= '0' && str[l] <= '9')
		{
			l++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "01239a";
	printf("%d", ft_str_is_numeric(str));
}*/
