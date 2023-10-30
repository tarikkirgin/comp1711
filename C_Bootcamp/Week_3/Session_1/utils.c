#include "utils.h"

FILE *file_open(char filename[], char mode[]){
    
    FILE *file = fopen(filename, mode);
    if (file == NULL)
    {
        perror("File i/o");
        exit(1);
    }
    return file;
}
