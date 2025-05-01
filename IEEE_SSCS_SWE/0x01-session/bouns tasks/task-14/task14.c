#include <stdio.h>
int _pow(int base , int exp){
    long long result=1;
    for(int i=1;i<=exp;i++){
        result*=base;
    }
    return result;
}
int _strlen(char *str){
    int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return counter;
}
int _count(char *str, char count){
    int counter = 0;
    for(int i=0;i<_strlen(str);i++){
        if (str[i] == count){
            counter++;
        }
    }
    return counter;
}
int _atoi(char *str_in) {
    int length = _strlen(str_in);
    int digit_start = 0 , signs_index = 0;
    int sum = 0;
    char signs[30];

    while (str_in[digit_start] == ' ') {
        digit_start++;
    }
    while (str_in[digit_start] == '+' || str_in[digit_start] == '-'){
        signs[signs_index] = str_in[digit_start];
        signs_index++;
        digit_start++;
    }
    int count_of_positive = _count(signs,'+');
    int count_of_negative = _count(signs,'-');
    int digit_count = length - digit_start;
    int numbers_mat[digit_count];

    for (int i = 0; i < digit_count; i++) {
        numbers_mat[i] = str_in[digit_start + i] - '0';
    }

    for (int i = 0; i < digit_count; i++) {
        long long weight = _pow(10, digit_count - i - 1);
        sum += numbers_mat[i] * weight;
    }
    if ( count_of_positive > count_of_negative){
        return sum;
    }
    else{
        return -sum;
    }
}
long long _abs(int a){
    if (a>=0){
        return a;
    }
    else{
        return -a;
    }
}
int sum(int argc, char *argv[]){
    int sum=0;
    for(int i=1;i<argc;i++){
        sum+=_abs(_atoi(argv[i]));
    }
    return sum;
}
int main(int argc , char *argv[]){
    printf("sum of numbers = %d\n",sum(argc,argv));
    return 0;
}