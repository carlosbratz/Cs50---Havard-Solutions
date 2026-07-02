#include <stdio.h>
#include <string.h>

int main (void) {
    int height, result, line = 1;
    char next_char;
    while (1) {
    printf("height: \n");
    
    result = scanf("%d%c", &height, &next_char);

    if (result == 2 && next_char == '\n' ) {
        if (height >= 1 && height <=8) {
            break;
        }
    }
    }
    if (next_char != '\n') {
        while(getchar() != '\n');
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