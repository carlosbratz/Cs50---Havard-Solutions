#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int height, line = 1;
    char buffer[50];
    char *endptr;

    while(1) {
        printf("height: \n");
        if (fgets (buffer, sizeof(buffer), stdin) != NULL){
            height = strtol(buffer, &endptr, 10);
            
            if (buffer != endptr && *endptr == '\n' && height >= 1 && height <= 8) {
                break;
            }
        }
    }    

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < (height - line); j++ ) {
            printf(" ");
        }
        for (int k = 0; k < line; k++) {
            printf("#");
        }
    printf(" ");
    for(int i = 0; i < line; i++) {
        printf("#");
    }
    line++;
    printf("\n");
    }
    return 0;
}