#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char str1[256];
    char str2[256];
    // str1 + str2 + space + null
    char dest_str[255 + 255 + 1 + 1];

    assert(scanf("%255[^\n]", str1) == 1);
    // discard newline
    assert(getchar() == '\n');
    assert(scanf("%255[^\n]", str2) == 1);

    strcat(dest_str, str1);
    strcat(dest_str, " ");
    strcat(dest_str, str2);
    printf("%s\n", dest_str);

    return 0;
}
