#include <stdio.h>
int main(void){
    int var=7;
    printf("hello world !");
    if (var < 5){
        call_function(var);
    }
    return 0;
}

/* Error : 
c_code.c: In function ‘main’:
c_code.c:7:9: warning: implicit declaration of function ‘call_function’ [-Wimplicit-function-declaration]
    7 |         call_function(var);
      |         ^~~~~~~~~~~~~
/usr/bin/ld: /tmp/ccqpOWOu.o: in function `main':
c_code.c:(.text+0x38): undefined reference to `call_function'
collect2: error: ld returned 1 exit status
*/