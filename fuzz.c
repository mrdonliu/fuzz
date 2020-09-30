#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
void startShell();
int main(){
    startShell();
}


void startShell(){
    char * command = NULL;
    size_t len = 0;
    while(1){
        if (getline(&command, &len, stdin) == -1){
            perror("getline");
            if( feof(stdin) ){
                exit(0);
            } else {
                exit(1);
            }
        }
        

        pid_t pid = fork();
        if( pid == 0 ){

        }
    }
    

}