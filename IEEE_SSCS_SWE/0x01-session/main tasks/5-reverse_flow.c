#include <stdio.h>
// this steps I wrote to help me in design the function
// first : store value of ( b ) in container ( c )
// second : assign value of ( b ) to value of ( a )
// third : assign value of ( a ) to a value of ( c ) which contains the value of past ( b )
void swap(int *a , int *b){
    int c;
    c = *b;
    *b = *a;
    *a = c;
}
int main(){
    int a = 13 , b= 2;
    printf("before, a = %d, b= %d\n",a,b);
    swap(&a,&b);
    printf("after, a = %d, b= %d\n",a,b);
    return 0;
}