#include "get_next_line.h"

int strlen(char *str)
{
    int i;
    while (str[i])
        i++;
    return (i);
}

char    *strjoin(char *s1, char ch)
{
    char    *str;
    int     i;
    int     len;

    i = 0;
    len = strlen(s1);
    str = (char *)malloc((len + 2) * sizeof(char));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = ch;
    str[i + 1] = '\0'
    if (s1)
        free(s1);
    return (str);
}

char    *get_next_line(int fd)
{
    static t_read strct = {.fd = -1};
    char    ch;
    char    *str;
}