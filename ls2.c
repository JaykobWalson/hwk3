#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include "ls2.h"

//Opens a path
//@param path is the desired path to a file

DIR* openPath(char*path){
    return opendir(path);
}
//Reads a path
//@param path is the desired path to a file
void readPath(char*path){
    DIR* directory = openPath(path);
    openPath(directory);
    struct dirent *file;
    file = readdir(directory);
    while(file != NULL){
        printf("%s", file->d_name);
    }
    closedir(directory);

}
//Closes a path
//@param path is the desired path to a file
void closePath(DIR* directory){
    closedir(directory);
}









