#include <stdio.h>
void repeat_message(int n ){
    for (int i=0;i<n;i++){
        printf("Hello, world.\n");
    }
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    repeat_message(n);
    return 0;
}