/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 16:40:34 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/15 16:40:34 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int this_space(int i)
{
	if (i == ' ' || i == '\t' || i == '\n')
		return(1);
	return(0);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (this_space(av[1][i]))
			i++;
		while (!this_space(av[1][i]) && av[1][i])
			write(1, &av[1][i++], 1);

	}
	write(1, "\n", 1);
	return (0);
}