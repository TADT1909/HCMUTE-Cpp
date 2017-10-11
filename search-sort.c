//search-sort.c
/*
 * INPUT: n số nguyên
 *
 * OUTPUT:
 * 	tổng n số nguyên
 * 	giá trị trung bình cộng
 * 	số lớn nhất
 * 	số bé nhất
 * 	số chẵn lớn nhất
 * 	số lẻ lớn nhất
 * 	số số chắn
 * 	số số lẻ
 */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
  	SetConsoleOutputCP(65001);
	system("cls");
	int sum = 0, min, max, max_chan, max_le;
	unsigned int n, chan = 0, le = 0;
	do {
	printf("Bạn cần nhập bao nhiêu số nguyên? ");
	scanf("%d", &n);
	} while (n <= 0);
	int a[n];
	for (int i = 1; i < n + 1; i++){
		printf("Số nguyên thứ %d = ", i);
		scanf("%d", &a[i-1]);
	}
	min = max = max_chan = max_le = a[0];
	for (int i = 0; i < n; i++){
		sum += a[i];
		max = (max < a[i])?a[i]:max;
		min = (min > a[i])?a[i]:min;
		max_le = (max_le < a[i] && a[i]%2 == 1)?a[i]:max_le;
		max_chan = (max_chan < a[i] && a[i]%2 == 0)?a[i]:max_chan;
		if ( a[i]%2 == 1) le++;
		else chan++;
	}
	printf("\nTổng %d số đã nhập: %d\n", n, sum);
	printf("\nTrung bình của %d số đã nhập: %d\n", n, sum / n);
	printf("\nSố lớn nhất: %d\n", max);
	printf("\nSố bé nhất: %d\n", min);
	printf("\nSố chẵn lớn nhất: %d\n", max_chan);
	printf("\nSố lẻ lớn nhất: %d\n", max_le);
	printf("\nTrong %d số đã nhập, có:\n", n);
	printf(" %d số chẵn\n", chan);
	printf(" %d số lẻ\n", le);
	return 0;
}
