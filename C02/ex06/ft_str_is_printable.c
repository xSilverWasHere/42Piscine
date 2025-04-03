/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:31:42 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/02 15:42:04 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 32 && str[l] <= 126)
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
	char str[] = "abc";
	printf("%d", ft_str_is_printable(str));
}*/
