/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muucan <muucan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:28:21 by muucan            #+#    #+#             */
/*   Updated: 2025/04/26 15:16:15 by muucan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 3;
	int div;
	int mod;

	ft_div_mod(x, y, &div, &mod);
	printf("x = %d, y = %d\n", x, y);
	printf("Division: %d, Modulo: %d\n", div, mod);
	return (0);
}
*/
