/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:15:36 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/03 10:08:59 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 'A' && str[l] <= 'Z')
		{
			l++;
		}
		else if (str[l] >= 'a' && str[l] <= 'z')
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
	char str[12] = "aA1a";
	printf("%d", ft_str_is_alpha(str));
}*/
