/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:34:25 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/02/27 14:41:31 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr( char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		write(1, &str[l], 1);
		l++;
	}
}

/*int	main(void)
{
	ft_putstr("Hello World\n");
}*/
