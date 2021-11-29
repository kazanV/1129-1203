#include <stdio.h>
#include <stdbool.h>

int main(int argc, char**argv) {
    char input;
    char lower[26] = {"abcdefghijklmnopqrstuvwxyz"};
    char upper[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    char *lowPtr = lower, *upPtr = upper;

    input = getchar();
    if (input == 'a') {
        for (int i = 0; i < 26; i++) {
            printf("%c\t", *lowPtr + i);
        }
    }
    else if (input == 'A') {
        for (int i = 0; i < 26; i++) {
            printf("%c\t", *upPtr + i);
        }
    }
    printf("\n");

    return 0;
}