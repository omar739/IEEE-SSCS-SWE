#include <stdio.h>
int sumDigits(long long number){
    if (number == 0){
        return 0;
    }
    return (number%10) + sumDigits(number/10);
}
int numofDigits(long long number){
    if (number == 0){
        return 0;
    }
    return 1 + numofDigits(number/10);
}
long long custoum_abs(long long number){  //because abs in <math.h> don't handle long long type
    if (number >= 0 ){
        return number;
    }
    else{
        return -1*number;
    }
}
int main(){
    long long number;
    scanf("%lld",&number);
    int sum = sumDigits(custoum_abs(number));
    int num = numofDigits(custoum_abs(number));
    if ( number < custoum_abs(number)){
        printf("number of digits is %d , it is negative number, and sum of all digits is %d ",num,sum);
    }
    else{
        printf("number of digits is %d , it is positive number, and sum of all digits is %d ",num,sum);
    }
    return 0;
}