/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 13:26:45 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/16 13:26:46 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void search_replace(char **av)
{
	int i;

	i = 0;
	if (!av[2][1] && !av[3][1])
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				write(1, &av[3][0], 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
		search_replace(av);
	write(1, "\n", 1);
	return (0);
}