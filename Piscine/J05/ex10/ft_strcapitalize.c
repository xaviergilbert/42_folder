/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 14:43:16 by xgilbert          #+#    #+#             */
/*   Updated: 2017/09/11 13:44:25 by xgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& ((str[i - 1] <= 'a' || str[i - 1] >= 'z')
			|| (str[i - 1] <= 'A' || str[i - 1] >= 'Z')
			|| (str[i - 1] <= '0' || str[i - 1] >= '9')))
			str[i] = str[i] - 32;
		if ((str[i] >= 'A' && str[i] <= 'Z')
			&& ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}