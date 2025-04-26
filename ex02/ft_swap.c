/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muucan <muucan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:48:43 by muucan            #+#    #+#             */
/*   Updated: 2025/04/26 14:26:59 by muucan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int x = 10;
	int y = 20;
	printf("Swap öncesi: x = %d, y = %d\n" , x, y);
	ft_swap(&x, &y);
	printf("Swap sonrası: x = %d, y = %d\n" , x, y);
	return (0);
}
*/
