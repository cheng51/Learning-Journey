#include <stdio.h>

void main(void) {
    int h;
    while(1) {
    printf("what's h? ");
    scanf("%i",&h);
    if(h <= 0) {
        continue;
    }
    else {
        break;
    }
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < i+1; j++) {
            printf("#");
        }
        printf("\n");
    }
}