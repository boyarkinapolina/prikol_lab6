#include <stdio.h>

#define SWAP(type, a, b) do { type temp = a; a = b; b = temp; } while (0)

int main() {
    int elem1, elem2;
    printf("Write 2 elements: ");
    scanf("%d %d", &elem1, &elem2);
    SWAP(typeof(elem1), elem1, elem2);
    printf("After changes: elem1 = %d, elem2 = %d\n", elem1, elem2);
    return 0;
}