/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 16:39:19 by tbahlai           #+#    #+#             */
/*   Updated: 2019/03/16 16:39:20 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char ft_strdup(char *str)
{
	char *dst;
	int i;

	i = 0;
	if (!str || !(dst = (char*)malloc(sizeof(char)) * ft_strlen(str) + 1))
		return(0);
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}