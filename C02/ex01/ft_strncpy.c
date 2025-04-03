/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 11:52:51 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/03/02 17:50:33 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	l;

	l = 0;
	while ((l < n) && (src[l] != '\0'))
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned int n = 50;
	char src[] = "Hello World!"; 
	char dest[20] = "";
	
	ft_strncpy(dest, src, n);
	printf("%s", dest);
}*/
