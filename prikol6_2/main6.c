#include <stdio.h>
#include "sem.h"

int main() {
    int m[100], size, x;
    printf("Write size of mass: ");
    scanf("%d", &size);

    printf("Write elements of mass in ascending order: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &m[i]);
    }
    printf("Write element to find: ");
    scanf("%d", &x);

    int res = recursive(m, 0, size - 1, x);

    if (res == -1) {
        printf("Element isn't in mass\n");
    } else {
        printf("Element has '%d' index\n", res);
    }
    return 0;
}