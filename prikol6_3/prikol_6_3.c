#include <stdio.h>

void quicksort(int *m, int size) {
    int levo = 0;
    int pravo = size - 1;
    int s[size];
    int h = -1;
    s[++h] = levo;
    s[++h] = pravo;

    while (h >= 0) {
        pravo = s[h--];
        levo = s[h--];

        int i = levo - 1;
        int base = m[pravo];

        for (int j = levo; j <= pravo - 1; j++) {
            if (m[j] < base) {
                i++;
                int temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }

        int temp = m[i + 1];
        m[i + 1] = m[pravo];
        m[pravo] = temp;

        int razdel = i + 1;
        if (razdel - 1 > levo) {
            s[++h] = levo;
            s[++h] = razdel - 1;
        }
        if (razdel + 1 < pravo) {
            s[++h] = razdel + 1;
            s[++h] = pravo;
        }
    }
}