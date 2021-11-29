#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    int num, m;
    scanf("%d", &num);
    
    int* arr = malloc(sizeof(int) * num);
    int *aPtr = arr;
    for (int i = 0; i < num; ++i) {
        scanf("%d", (aPtr + i));
    }

    int pos = 0;
    scanf("%d", &m);
    for (int i = 0; i < num; ++i) {
        if (m != *(aPtr + i)) {
            pos = 0;
            continue;
        }
        else {
            printf("%d position.", i + 1);
            pos = 1;
            break;
        }
    }
    printf("%s", pos ? "\n" : "none\n");
    free(arr);

    return 0;
}