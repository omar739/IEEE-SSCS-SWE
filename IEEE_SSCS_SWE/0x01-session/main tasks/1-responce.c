#include <stdio.h>
int is_responce_detected(int strength){
    if (strength>=50){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int strength;
    scanf("%d",&strength);
    int responce = is_responce_detected(strength);
    if (responce == 1){
        printf("detected\n");
    }
    else{
        printf("not detected\n");
    }
    return 0;
}