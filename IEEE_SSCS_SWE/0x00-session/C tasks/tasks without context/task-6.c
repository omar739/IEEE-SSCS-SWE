#include "_putchar.h"
int main(void){
    for(int i=0;i<=9;i++){
        int first = i;
        for(int j=0;j<=9;j++){
            if((i != j) && (i<j)){
                _putchar(i+48);
                _putchar(j+48);
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    return 0;
}
