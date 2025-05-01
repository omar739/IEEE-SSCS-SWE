#include <unistd.h>
#include <fcntl.h>
void _putchar(char a , int fd , char *filename){
    static int file_fd = -1;

    if (fd == 1){
        write(fd, &a, 1);
    }
    else{
        if (file_fd == -1) {
            file_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
            if (file_fd == -1) return;
        }
        write(file_fd, &a, 1);
    }
}

void Pstring(char *string,int fd, char *filename){
    int counter = 0;
    while (string[counter] != '\0') {
        _putchar(string[counter],fd,filename);
        counter++;
    }
}

int main(){
    char mystring[70]="Hi my name is Omar Ahmed";
    Pstring(mystring,1,"empty.txt");
    return 0;
}
