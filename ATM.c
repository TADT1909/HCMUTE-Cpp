//ATM.c
#include <stdio.h>
int main() {
    system("chcp 65001");
    system("cls");
    unsigned int x = 0,
    y = 0,
    z = 0,
    t = 0,
    rut = 0,
    tong = 0,
    temp = 0;
    printf("Nhập số tờ tiền 500.000: "); scanf("%d", &x);
    printf("Nhập số tờ tiền 200.000: "); scanf("%d", &y);
    printf("Nhập số tờ tiền 100.000: "); scanf("%d", &z);
    printf("Nhập số tờ tiền 50.000: "); scanf("%d", &t);
    tong = 500*x + 200*y + 100*z + 50*t;
    printf("Tổng số tiền ATM hiện tại còn: %d.000\n", tong);
    printf("Bạn cần rút bao nhiêu tiền? (Bội của 1000) "); scanf("%d", &rut);
    if (rut > tong) printf("ATM hiện tại không còn đủ tiền\nBạn hãy nhập số tiền khác, từ %d.000 trở xuống\n", tong);
    else {
    }

    return 0;
}