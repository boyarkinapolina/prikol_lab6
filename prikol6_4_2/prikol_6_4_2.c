#include <stdio.h>

#define MAX 100

void counting_sort(int *m, int size) {
  int schet[MAX + 1] = {0};
  int sorted_m[size];

  for (int i = 0; i < size; i++)
    schet[m[i]]++;

  for (int k = 1; k <= MAX; k++)
    schet[k] += schet[k - 1];

  for (int j = size - 1; j >= 0; j--) {
    sorted_m[schet[m[j]] - 1] = m[j];
    schet[m[j]]--;
  }

  for (int d = 0; d < size; d++)
    m[d] = sorted_m[d];
}