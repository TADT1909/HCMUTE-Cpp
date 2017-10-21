// sort_odd_even_number.c
#include <malloc.h>
#include <stdio.h>
int main() {
  int n, i, j, *a;
  printf("Nhap so n phan tu can nhap: ");
  scanf("%d", &n);
  a = (int *)malloc(n * sizeof(int));
  for (i = 0; i < n; i++) {
    printf("Gia tri phan tu thu %d: ", i + 1);
    scanf("%d", &*(a + i));
  }
  for (i = 0; i < n - 1; i++)
    for (j = i + 1; j < n; j++) {
      if (*(a + i) % 2 == 0 && *(a + j) % 2 == 0) {
        if (*(a + i) < *(a + j)) {
          *(a + i) += *(a + j);
          *(a + j) = *(a + i) - *(a + j);
          *(a + i) -= *(a + j);
        }
      } else if (*(a + i) % 2 == 1 && *(a + j) % 2 == 1) {
        if (*(a + i) > *(a + j)) {
          *(a + i) += *(a + j);
          *(a + j) = *(a + i) - *(a + j);
          *(a + i) -= *(a + j);
        }
      }
    }
  printf("Mang sau khi sap xep: \n(So chan giam dan. So le tang dan)\n");
  for (i = 0; i < n; i++) {
    printf("%d ", *(a + i));
  }
  return 0;
}
