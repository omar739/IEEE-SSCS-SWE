#include <stdio.h>
int main(){
    int signal = 98;
    int *ptr = &signal;
    printf("address of signal is %p , and its value is %d\n",ptr ,*ptr);
    return 0;
}