#include <stdio.h>
int sum_layers(int n){
    int sum=0;
    if ( n != 0){
        sum = n + sum_layers(n-1);
    }
    else{
        return sum;
    }
}
int main(){
    printf("for n = 4  %d\n", sum_layers(4));
    printf("for n = 6  %d\n", sum_layers(6));
    printf("for n = 8  %d\n", sum_layers(8));
    printf("for n = 11 %d\n", sum_layers(11));
    printf("for n = 20 %d\n", sum_layers(20));
    printf("for n = 33 %d\n", sum_layers(33));
    return 0;
}