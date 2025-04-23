#include "_putchar.h"
int main(){
    char start_s='a' , End_s='z' , start_c ='A' ,End_c ='Z';
    for(int i=start_s ; i<=End_s ; i++){
        if ((char)i != 'q'){
            _putchar(i);
        }
    }
    for(int i=End_c;i>=start_c;i--){
        if ((char)i != 'Q'){
            _putchar(i);
        }
    }
    return 0;
}
