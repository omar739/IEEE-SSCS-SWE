#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
int Even_or_odd(int x){
    if (x%2 ==0){
        return 1;
    }
    else{
        return 2;
    }
}
int more_or_less(int x){
    if ( x > 5){
        return 1;
    }
    else{
        return 2;
    }
}
int last_digit(float x) {
    int integer_part = (int)x;
    int last = abs(integer_part % 10);
    return last;
}
int main(void)
{
	int n , digit;
    float m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
    m = abs(n);
    digit = last_digit(m);
    if(Even_or_odd(digit) ==1){
        if(more_or_less(digit)==1){
            printf("last digit is %d and it is Even , larger then 5 ",digit);
        }
        else{
            printf("last digit is %d and it is Even , less then 5 ",digit);
        }
    }
    else{
        if(more_or_less(digit)==1){
            printf("last digit is %d and it is odd , larger then 5 ",digit);
        }
        else{
            printf("last digit is %d and it is odd , less then 5 ",digit);
        }        
    }
	return 0;
}