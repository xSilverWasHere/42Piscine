/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 11:44:31 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/02 11:51:57 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	l;

	l = 0;
	while (src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[12] = "Hello World!";
	char	dest[12] = "";
	ft_strcpy(dest, src);
	printf("%s", dest);
}*/
