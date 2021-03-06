/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <wendell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 23:21:55 by wendell           #+#    #+#             */
/*   Updated: 2020/08/13 23:21:56 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int num, int power)
{
	int		rez;

	rez = 1;
	if (power == 0)
		return (1);
	while (power-- > 0)
		rez *= num;
	return (rez);
}
