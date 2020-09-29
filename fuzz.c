#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
void startShell();
int main(){
    startShell();
}


void startShell(){
    while(1){
        
        char* line = readline(">");
        printf(line);
    }
    

}