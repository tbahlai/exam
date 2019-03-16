/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 16:53:11 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/15 16:53:12 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int this_space(int i)
{
	if (i == ' ' || i == '\t' || i == '\n')
		return(1);
	return (0);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void lact_word(char *av)
{
	int i;
	int len;

	len = ft_strlen(av) - 1;
	i = 0;
	while (this_space(av[len]))
		len--;
	while (len >= 0 && !this_space(av[len]))	
		len--;
	len++;
	while (av[len] && !this_space(av[len]))
	{	
		write(1, &av[len], 1);
		len++;
	}

}

int main(int ac, char **av)
{
	if (ac == 2)
		lact_word(av[1]);
	write(1, "\n", 1);
	return (0);
}