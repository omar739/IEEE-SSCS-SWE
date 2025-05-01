#include "_atoi.h"
#include "_putchar.h"
#include <stdio.h>

void split_number_to_digits_then_print_with_putchar(long long num){
    long long remain =1 , mod=0 , number = num;
    int numbers[20] , index=0;
    while (remain != 0){
        mod = number%10;
        numbers[index]=mod;
        number = number/10;
        remain = number;
        index++;
    }
    for(int i=index-1;i>=0;i--){
        _putchar(numbers[i]+48);
    }
}
int main(void){
    char string_before[50] = "    ---+----+++1213";
    if (_atoi(string_before)>= 0){
        split_number_to_digits_then_print_with_putchar(_atoi(string_before));
    }
    else{
        _putchar('-'); // print negative sign
        split_number_to_digits_then_print_with_putchar(-1*_atoi(string_before));
    }
    return 0;
}