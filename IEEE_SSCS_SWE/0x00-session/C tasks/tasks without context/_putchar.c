#include "_putchar.h"
#include <unistd.h>
void _putchar(char x){
    write(1,&x,1);
}