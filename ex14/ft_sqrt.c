/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:15:12 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/12 13:22:04 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int x;

	x = 1;
	while (x * x < nb && x <= 46340)
		x++;
	if (x * x == nb)
		return (x);
	else
		return (0);
}
