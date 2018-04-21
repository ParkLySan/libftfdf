/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 16:21:40 by litoulza          #+#    #+#             */
/*   Updated: 2017/12/12 19:11:57 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_strdel(char **as)
{
	ft_memdel((void**)as);
}

int main (int argc, char **argv)
{
	printf("%d"ft_strdel[1]);
	argc++;
	return (0);
}
