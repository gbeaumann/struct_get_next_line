#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

//# define BUFFER_SIZE 2

# include   <stdio.h>
# include   <stdlib.h>
# include   <unistd.h>

typedef struct  s_read
{
    int     fd;
    int     max;
    int     pos;
    char    backup[BUFFER_SIZE];
}               t_read;

int     init_read(int fd, t_read *strct);
char    check_read(t_read *strct);
char    *ft_strjoin(char *s1, char ch);
int     ft_strlen(char *str);
char    *get_next_line(int fd);

#endif