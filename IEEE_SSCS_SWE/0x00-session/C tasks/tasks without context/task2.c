#include "_putchar.h"
int main(){
    char start_s='a' , End_s='z';
    for(int i=1;i<=5;i++){
        for(int j=start_s;j<=End_s;j++){
            _putchar(j);
        }
        _putchar('\n');
    }
    return 0;
}
