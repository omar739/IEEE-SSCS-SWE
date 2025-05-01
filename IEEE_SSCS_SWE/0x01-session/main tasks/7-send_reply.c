#include <stdio.h>
char *get_reply(){
    static char str[]="Gamma Waves received - 1000THZ";
    return str;
}
int main(){
    char *stringg= get_reply();
    printf("%s\n",stringg);
    return 0;
}