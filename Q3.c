#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char str[128] = {0};
    char str_rev[128] = {0};
    char *strPtr = str;
    
    scanf("%[^\n]", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str_rev[len - 1 - i] = *(strPtr + i);
    }

    for (int j = 0; j < len; j++) {
        putchar(str_rev[j]);
    }
    printf("\n");

    return 0;
}