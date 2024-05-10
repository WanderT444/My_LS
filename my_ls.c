// File will contain a trimmed down or lite if you will recreation of the linux LS command
// The program can be ran with no argumenets or a singular arguement 
// Last Edited by Wander Cerda Torres on 05/  /2024


#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

void listFiles_with_args(const char * dirname);
void listFiles_no_args(const char * dirname);

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

   if (argv[1] == NULL){
        
        listFiles_no_args(".");
        
    } // end if input == null
    
    // here the program will print everything out in the selected directory with recursion
    else {
        listFiles_with_args(argv[1]);
    } // end else

} // end main 


// first we have to use open dir to access the directories


 // start with Directory
    

void listFiles_with_args(const char * dirname){
    
    
    DIR * mainDir;

    mainDir = opendir(dirname);                            // instruction to open all directories and files
    if ( mainDir == NULL){
       printf("%s -- %s\n","My_LS: cannot open directory ",dirname );
       return;
    }

     //create readdir to read data from open dir

    struct dirent * data;
    
    data = readdir(mainDir);
    

}
