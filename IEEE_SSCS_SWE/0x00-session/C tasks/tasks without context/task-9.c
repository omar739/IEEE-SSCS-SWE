#include "_putchar.h"
#include <stdio.h>
void comma_put(int last_flag){
    if(last_flag==0){
        _putchar(',');
    }
}
void return_digits(int x,int last_flag){
    int las_dig = x%10;
    int sec_dig = (x%100 -(las_dig))/10;
    int fir_dig = (x%1000-(sec_dig))/100;
    if (fir_dig==0 && sec_dig!=0){
        _putchar(sec_dig+48);
        _putchar(las_dig+48);
        comma_put(last_flag);
        _putchar(' ');
    }
    else if(fir_dig==0 && sec_dig==0){
        _putchar(las_dig+48);
        comma_put(last_flag);
        _putchar(' ');
    }
    else if(fir_dig ==0 && sec_dig==0 && las_dig==0){
        _putchar(48);
        comma_put(last_flag);
        _putchar(' '); 
    }
    else{
        _putchar(fir_dig+48);
        _putchar(sec_dig+48);
        _putchar(las_dig+48);
        comma_put(last_flag);
        _putchar(' ');
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    int mul;
    if ( n>=0 && n<=15){
        for(int i=0;i<=n;i++){
            for (int j=0;j<=n;j++){
                mul = i*j;
                if (j!=n){
                    return_digits(mul,0);
                }
                else{
                    return_digits(mul,1);
                }
            }
            _putchar('\n');
        }
    }
    return 0;
