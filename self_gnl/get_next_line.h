#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

typedef struct  s_read
{
    int     fd;
    int     max;
    int     len;
    char    *backup;
}               t_read

