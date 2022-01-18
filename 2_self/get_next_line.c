#include    "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    if (!str)
        return (0);
    while (str[i])
        i++;
    return (i);
}

char    *ft_strjoin(char *s1, char ch)
{
    int     i;
    int     len;
    char    *str;

    i = 0;
    len = ft_strlen(s1);
    str = (char *)malloc((len + 2) * sizeof(char));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = ch;
    str[i + 1] = '\0';
    if (s1)
        free(s1);
    return (str);
}

char    *get_next_line(int fd)
{
    static t_read   strct = {.fd = -1};
    char    ch;
    char    *str;

    str = NULL;
    if (strct.fd != fd)
    {
        if (!init_read(fd, &strct))
            return (0);
    }
    ch = check_read(&strct);
    while (ch)
    {
        str = ft_strjoin(str, ch);
        if (ch == '\n')
            return (str);
        ch = check_read(&strct);
    }
    return (str);
}