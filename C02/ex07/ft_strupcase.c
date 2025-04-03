/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strupcase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:31:42 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/02 15:42:04 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 'a' && str[l] <= 'z')
		{
			str[l] = str[l] - 32;
		}
		l++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "HelLO WoRlD!11";
	printf("%s", ft_strupcase(str));
}*/
