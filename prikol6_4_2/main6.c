#include <stdio.h>
#include "sem.h"

int main() {
    int size;
    printf("Write the size of mass: ");
    scanf("%d", &size);
    int m[size];
    printf("Write the elements of mass:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &m[i]);

    counting_sort(m, size);

    printf("Sorted mass: ");
    for (int i = 0; i < size; i++)
        printf("%d ", m[i]);
    return 0;
}