#include <stdio.h>
#include "sem.h"

int main() {
    int size;
    printf("Write the size of mass: ");
    scanf("%d", &size);
    int m[size];
    printf("Write the elements of mass: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &m[i]);
    }
    printf("Unsorted mass: ");
    for (int k = 0; k < size; k++) {
        printf("%d ", m[k]);
    }

    quicksort(m, size);

    printf("\nSorted mass: ");
    for (int j = 0; j < size; j++) {
        printf("%d ", m[j]);
    }
    return 0;
}