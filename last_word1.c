/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 17:39:34 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/15 17:39:35 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int this_space(int i)
{
	if (i == ' ' || i == '\n' || i == '\t')
		return(1);
	return(0);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void last_word(char *av)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(av) - 1;
	while (this_space(av[len]))
		len--;
	while (!this_space(av[len]) && len >= 0)
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
		last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}