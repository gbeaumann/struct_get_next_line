#include    "get_next_line.h"

int init_read(int fd, t_read *strct)
{
    strct->fd = fd;
    strct->pos = 0;
    strct->max = read(fd, strct->backup, BUFFER_SIZE);
    if (strct->max <= 0)
        return (0);
    else
        return (1);
}

char    check_read(t_read *strct)
{
    char    resultat;

    if (strct->pos >= strct->max)
    {
        strct->max = read(strct->fd, strct->backup, BUFFER_SIZE);
        strct->pos = 0;
        if (strct->max <= 0)
            return (0);
    }
    resultat = strct->backup[strct->pos];
    strct->pos++;
    return (resultat);
}