#include <stdio.h>
#include "sem.h"

int main() {
    int m[212];
    int size, i;
    printf("Write number of elements: ");
    scanf("%d", &size);
    printf("Write %d elements:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &m[i]);

    mergeSort(m, 0, size - 1);

    printf("\nSorted array:\n");
    for (i = 0; i < size; i++)
        printf("%d ", m[i]);
    return 0;
}
