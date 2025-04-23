#include "_isalpha.h"

int _isalpha(char x){
    if (((int)x <=(int)'Z' && (int)x>='A') || ((int)x <=(int)'z' && (int)x>='a')){
        return 1;
    }
    else{
        return 0;
    }
}