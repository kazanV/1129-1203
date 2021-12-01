#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main(int argc, char **argv) {
    char str1[256];
    char str2[256];
    char ch;

    scanf("%[^\n]", str1);
    scanf("%c", &ch);    
    scanf("%[^\n]", str2);

    const char *ptr1 = str1;
    const char *ptr2 = str2;

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = len1 + len2 + 1;

    char *str = malloc(sizeof(int) * (len));

    for(int i = 0; i < len1; i++) {
        str[i] = *(ptr1 + i);
    }
    str[len1] = ' ';
    for(int i = 0; i < len2; i++) {
        str[i + len1 + 1] = *(ptr2 + i);
    }

    printf("%s\n", str);

    return 0;
}