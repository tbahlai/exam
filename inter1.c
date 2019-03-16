/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 17:50:43 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/16 17:50:44 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[1][j])
			{
				if (check(av[1], av[1][i], i))
				{
					write(1, &av[1][i], 1);
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}