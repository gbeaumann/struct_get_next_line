#include    "get_next_line.h"
#include    <fcntl.h>

int main()
{
    int fd;

    fd = open("txt.txt", O_RDONLY);
    printf ("%s", get_next_line(fd));
    printf ("%s", get_next_line(fd));
    printf ("%s", get_next_line(fd));
    return (0);
}