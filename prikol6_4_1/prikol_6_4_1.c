#include <stdio.h>

void merge(int m[], int levo, int a, int pravo) {
    int i, j, k;
    int n1 = a - levo + 1;
    int n2 = pravo - a;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = m[levo + i];
    for (j = 0; j < n2; j++)
        R[j] = m[a + 1 + j];

    i = 0;
    j = 0;
    k = levo;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            m[k] = L[i];
            i++;
        } else {
            m[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        m[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        m[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int m[], int levo, int pravo) {
    if (levo < pravo) {
        int a = levo + (pravo - levo) / 2;
        mergeSort(m, levo, a);
        mergeSort(m, a + 1, pravo);
        merge(m, levo, a, pravo);
    }
}
