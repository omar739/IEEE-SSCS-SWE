#include "_putchar.h"

int main(void){
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                if ( ((i!=j)&&(i!=k)&&(j!=k)) && ((i<j)&&(j<k))){
                    _putchar(i+48);
                    _putchar(j+48);
                    _putchar(k+48);
                    _putchar(',');
                    _putchar(' ');
                }
            }
        }
    }
    return 0;
}
