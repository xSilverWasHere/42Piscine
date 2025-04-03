/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:31:42 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/02 15:42:04 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 'A' && str[l] <= 'Z')
		{
			str[l] = str[l] + 32;
			l++;
		}
		else
		{
			l++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "HeLlo WOrLd!111";
	printf("%s", ft_strlowcase(str));
}*/
