// File will contain a trimmed down or lite if you will recreation of the linux LS command
// The program can be ran with no argumenets or a singular arguement 
// Last Edited by Wander Cerda Torres on 05/  /2024


#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>



int main(int argc, const char * argv[]) {

char cwd[4096];

// for checking the current working directory 
getcwd(cwd, sizeof(cwd));
    
    if (getcwd(cwd, sizeof(cwd)) == NULL){
        perror("Fatal Error");
        exit(1);
    }
    
    prinft("%s",cwd);

   if (argc > 2) {
    printf("%s"," Error too many arguements My_LS can only handle 1 argument at a time\n");
    return(1);
   }

} // end main 
