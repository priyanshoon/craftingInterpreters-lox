#include<stdio.h>
#include<stdlib.h>
#include "lexer/lexer.h"

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("Provide the source file\n");
        exit(1);
    } else {
        printf("%s\n", argv[1]);
    }

    FILE* file_ptr; 

    file_ptr = fopen(argv[1], "r");

    if (file_ptr == NULL) {
        printf("Error occurred while creating a file!\n");
    } else {
        printf("the file is there\n");
    }

    if (file_ptr != NULL) {
        fclose(file_ptr);
        printf("File closed!");
    } else {
        printf("system hanged\n");
    }


    return 0;
}
