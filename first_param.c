/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 16:33:14 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/15 16:33:15 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac > 1)
	{
		while (av[1][i])
			{
				write(1, &av[1][i], 1);
				i++;
			}
	}
	write(1, "\n", 1);
	return(0);
}