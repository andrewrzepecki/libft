/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 00:15:55 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/07 00:16:32 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 'a' || str[c] > 'z')
			return (0);
		c++;
	}
	return (1);
}