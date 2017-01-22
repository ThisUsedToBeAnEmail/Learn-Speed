#include <stdio.h>

int main() {
    char vowels[][5] = {
        {'A', 'E', 'I', 'O', 'U'},
        {'a', 'e', 'i', 'o', 'u'}
    };
    int i;
    int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            printf("Address of vowels[%d][%d]: %u\n", i, j, &vowels[i][j]);
        }
        printf("\n");
    }
}
