/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 17:55:20 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/16 17:55:20 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int check_symbol(char *str, char c, int len)
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

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (check_symbol(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (check(av[1], av[2][i]))
			{
				if (check_symbol(av[2], av[2][i], i))
					write(1, &av[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}