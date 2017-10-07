//search-sort.cpp
/*
 * INPUT: n số nguyên
 *
 * OUTPUT:	tổng n số nguyên
 * 			giá trị trung bình cộng
 * 			số lớn nhất
 * 			số bé nhất
 * 			số chẵn lớn nhất
 * 			số lẻ lớn nhất
 * 			số số chắn
 * 			số số lẻ
 */
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	system("cls");
	int sum = 0, min, max, max_chan, max_le;
	unsigned int n, chan = 0, le = 0;
	do {
	cout << "Ban can nhap bao nhieu so nguyen? ";
	cin >> n;
	} while (n <= 0);
	int a[n];
	for (int i = 1; i < n + 1; i++){
		cout << "So nguyen thu " << i << " = ";
		cin >> a[i-1];
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
	printf("\nTong %d so da nhap: %d\n", n, sum);
	printf("\nTrung binh cua %d so da nhap: %d\n", n, sum / n);
	printf("\nSo lon nhat: %d\n", max);
	printf("\nSo be nhat: %d\n", min);
	printf("\nSo chan lon nhat: %d\n", max_chan);
	printf("\nSo le lon nhat: %d\n", max_le);
	printf("\nTrong %d so da nhap, co:\n", n);
	printf(" %d so chan\n", chan);
	printf(" %d so le\n", le);
	return 0;
}
