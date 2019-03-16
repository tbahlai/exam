/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 13:39:18 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/16 13:39:18 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int main(int ac, char **av)
{
	int i;
	int letter;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			letter = 0;
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				letter = av[1][i] - 63;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				{
					letter = av[1][i] - 95;
					while (--letter)
						write(1, &av[1][i], 1);
				}
			else
			{
				write(1, &av[1][i], 1);
				//i++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}