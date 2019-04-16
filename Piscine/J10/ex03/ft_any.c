/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:15:34 by xgilbert          #+#    #+#             */
/*   Updated: 2017/09/20 17:14:04 by xgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int length, int (*f)(char*))
{
	int		i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}