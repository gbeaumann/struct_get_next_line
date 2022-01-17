/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:49:45 by gbeauman          #+#    #+#             */
/*   Updated: 2022/01/13 16:40:21 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//# define BUFFER_SIZE 5

# include	<stdio.h>
# include	<unistd.h>
# include	<stdlib.h>

typedef struct s_read
{
	int		fd;
	int		max;
	int		pos;
	char	str[BUFFER_SIZE];
}	t_read;

char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char ch);
int		init_check(int fd, t_read *strc);
char	read_check(t_read *strc);

#endif
