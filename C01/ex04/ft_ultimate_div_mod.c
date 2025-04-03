/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:17:38 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/02/27 14:20:10 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

/*int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf ("a = %d\n" "b = %d\n", a, b);
}*/
