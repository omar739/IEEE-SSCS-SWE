#include <stdio.h>
int is_strong_signal(int strength){
    if (strength>=50){
        return 1;
    }
    else{
        return 0;
    }
}
void check_signal(int strength){
    int ret = is_strong_signal(strength);
    if (ret == 1){
        printf("strong signal detected\n");
    }
    else{
        printf("No signal detected\n");
    }
}
int main(){
    int values[] = {12,33,90,54,102,22};
    for(int i=0;i<=5;i++){
        printf("for signal with value : %d ,responce is : ",values[i]);
        check_signal(values[i]);
    }
    return 0;
}

/* output is :
for signal with value : 12 ,responce is : No signal detected
for signal with value : 33 ,responce is : No signal detected
for signal with value : 90 ,responce is : strong signal detected
for signal with value : 54 ,responce is : strong signal detected
for signal with value : 102 ,responce is : strong signal detected
for signal with value : 22 ,responce is : No signal detected
*/