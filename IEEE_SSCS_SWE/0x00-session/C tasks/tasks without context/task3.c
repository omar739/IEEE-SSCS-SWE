#include <stdio.h>
int main(){
    char input_from_usr;
    scanf("%c",&input_from_usr);
    if ( (int)input_from_usr >= (int)'A' && (int)input_from_usr <= (int)'Z'){
        printf("uppercase\n");
    }
    else if ((int)input_from_usr >= (int)'a' && (int)input_from_usr <= (int)'z'){
        printf("lowercase\n");
    }
    else{
        printf("not alpha\n");
    }
    return 0;
}
