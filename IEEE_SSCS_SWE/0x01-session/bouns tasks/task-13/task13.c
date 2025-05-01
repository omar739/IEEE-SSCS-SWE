#include <stdio.h>
int _strlen(char *str){
    int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return counter;
}
int counter(char *mystring){
    int start =0, counter=0, end=_strlen(mystring)-1, space_index =0;
    while (mystring[start]==' '){
        start++;
    }
    while (mystring[end]==' '){
        end--;
    }
    
    //printf("%d\n",start);
    for(int i=start;i<=end+1;i++){
        if (mystring[i]==' '){
            counter++;
            space_index = i+1;
            while (mystring[space_index] == ' '){
                space_index++;
                i++;
            }
        }
    }
    return counter;
}
int main(){
    char str[1000] = "  this    string must   be              11  words  when    call     this function   a    ";
    printf("number of words is : %d\n",counter(str));
    return 0;
}
