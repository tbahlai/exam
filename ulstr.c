/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 14:11:01 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/16 14:11:02 by tbahlai          ###   ########.fr       */
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
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				letter += 32;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				letter -= 32;
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}