#include <unistd.h>
#include <fcntl.h>
#include "_putchar.h"
void _putchar(char a) {
    static int fd = -1;
    if (fd == -1) {
        fd = open("converted_numbers.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        if (fd == -1) return; 
    }

    write(fd, &a, 1);
}