/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muucan <muucan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:18:37 by muucan            #+#    #+#             */
/*   Updated: 2025/04/26 15:37:52 by muucan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int x = 12;
	int y = 5;
	
	printf("x değeri : %d, y değeri : %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("Yeni x değeri : %d, Yeni y değeri : %d\n", x, y);
}
*/
