#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int bufferOverflow(char *inputString){
    char buffer[16];
    strcpy(buffer, inputString); 

    return 1;
}

int main(int argc, char **argv)
{
    char inputString[512];
    FILE *inputFile;
    inputFile = fopen("inputFile.txt", "r");
    fread(inputString, sizeof(char), 512, inputFile);
    bufferOverflow(inputString);
    printf("testing\n");
    printf("characters: %s \n", inputString);
    return 0;
}