#include <stdio.h>
void print_message(char *msg){
    printf("%s\n",msg);
}
int main(){
    char str[]="hello from the other side, I must have called a thousand times";
    print_message(str);
    return 0;
}