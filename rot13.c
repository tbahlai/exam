/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 14:22:34 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/16 14:22:35 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char letter;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			letter = av[1][i];
			if ((av[1][i] >= 'A' && av[1][i] <= 'M') || (av[1][i] >= 'a' && av[1][i] <= 'm'))
				letter += 13;
			if ((av[1][i] > 'm' && av[1][i] <= 'z') || (av[1][i] > 'M' && av[1][i] <= 'Z'))
				letter -= 13;
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}