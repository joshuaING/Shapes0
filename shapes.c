//Joshua Ingram
//C-The-Shapes
//COS 135

#include <studio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int z = 1; z <= i; z++) { 
            printf("x");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 5; i++) { 
        for (int z = 0; z < 5 - i; z++) { 
            printf(" ");
        }
        for (int z = 0; z < i; z++) {
            printf("x");
        }
        printf("\n");
    } 
}