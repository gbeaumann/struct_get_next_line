#include    "get_next_line.h"
#include    <stdio.h>
#include    <fcntl.h>

int main()
{
    int fd;

    fd = open("chat.txt", O_RDONLY);
    printf ("%s", get_next_line(fd));
    printf ("%s", get_next_line(fd));
    return (0);
}