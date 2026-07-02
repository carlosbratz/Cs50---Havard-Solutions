#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int height, line = 1;
    char buffer[50];
    char *endptr;
    
    while(1) {
        printf("height: ");
        if (fgets (buffer, sizeof(buffer), stdin) != NULL) {
        height = strtol(buffer, &endptr, 10);

            if (buffer != endptr && *endptr == '\n' && height >= 1 && height <=8) {
                break;
            }
        }
    }
    for(int k = 0; k < height; k++) {
        for (int i = 0; i < (height - line); i++) {
            printf(" ");
            
        }
        for (int j = 0; j < line; j++) {
            printf("#");
        }
        line++;
        printf("\n");
    }
    


    return 0;

}