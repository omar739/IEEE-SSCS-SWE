#include <stdio.h>
void echo(int n){
    if (n !=0){
        printf("%d: Echo...\n",n);
        echo(n-1);
    }
}
int main(){
    int n = 5;
    echo(n);
    return 0;
}