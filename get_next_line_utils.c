/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:34:48 by gbeauman          #+#    #+#             */
/*   Updated: 2022/01/13 16:15:12 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"get_next_line.h"

int	init_check(int fd, t_read *strc)
{
	strc->pos = 0;
	strc->fd = fd;
	strc->max = read(fd, strc->str, BUFFER_SIZE);
	if (strc->max < 0)
		return (0);
	else
		return (1);
}

char	read_check(t_read *strc)
{
	char	result;

	if (strc->pos >= strc->max)
	{
		strc->max = read(strc->fd, strc->str, BUFFER_SIZE);
		strc->pos = 0;
		if (strc-> max < 0)
			return (0);
	}
	result = strc->str[strc->pos];
	strc->pos++;
	return (result);
}
