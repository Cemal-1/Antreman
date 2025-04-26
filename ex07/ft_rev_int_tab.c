/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muucan <muucan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:30:16 by muucan            #+#    #+#             */
/*   Updated: 2025/04/26 17:08:26 by muucan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int arr[] = {7, 2, 5, 4, 9};
	int size = 5;
	int i;
	
	i = 0;
	ft_rev_int_tab(arr, size);
	while(i<size)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}
*/
