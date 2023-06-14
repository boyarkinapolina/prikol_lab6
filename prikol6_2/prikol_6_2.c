#include <stdio.h>

int recursive(int *m, int levo, int pravo, int x) {
    if (levo <= pravo) {
        int centr = levo + (pravo - levo) / 2;
        if (m[centr] == x) {
            return centr;
        } else if (m[centr] < x) {
            return recursive(m, centr + 1, pravo, x);
        } else {
            return recursive(m, levo, centr - 1, x);
        }
    }

    return -1;
}
