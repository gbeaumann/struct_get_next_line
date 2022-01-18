#ifndef     GET_NEXT_LINE_H

# define    GET_NEXT_LINE_H

//# define    BUFFER_SIZE 3

# include   <unistd.h>
# include   <stdlib.h>

typedef struct  s_read
{
    int fd;
    int max;
    int pos;
    char    backup[BUFFER_SIZE];
}               t_read;

char    *get_next_line(int fd);
char    check_read(t_read *strct);
int     ft_strlen(char *str);
int     init_read(int fd, t_read *strct);
char    *ft_strjoin(char *s1, char ch);

#endif