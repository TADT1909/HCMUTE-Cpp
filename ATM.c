//ATM.c
/*
 *
 * Rút tiền từ ATM
 * biết số tờ tiền 500.000, 200.000, 100.000, 50.000 còn lại trong máy
 * hiển thị số tờ tiền với từng mệnh giá tương ứng cần đưa ra cho khách hàng
 * 
 * còn lỗi với trường hợp cần rút xxx50.000 và trong máy không còn đủ tờ 50.000
 * 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001");
    system("cls");
    unsigned int rut = 0,
                 con = 0,
                 temp = 0,
                 x1, y1, z1, t1;
    unsigned int i = 0;
    unsigned int menhgia[] = {500, 200, 100, 50},
                 soto[] = {0, 0, 0, 0};
    for (int j = 0; j < 4; j++)
    {
        printf("Nhập số tờ tiền %d.000: ", menhgia[j]);
        scanf("%d", &soto[j]);
        con = con + menhgia[j] * soto[j];
    }
    printf("Tổng số tiền ATM hiện tại còn: %d.000\n\n", con);
    printf("Bạn cần rút bao nhiêu tiền? (Bội của 1000) ");
    scanf("%d", &rut);
    while (rut > con || rut < 50)
    {
        printf("\nATM hiện tại không còn đủ tiền. Hoặc bạn đã nhập số tiền nhỏ hơn 50.000\nHãy nhập số tiền khác, nhỏ hơn %d.000 và lớn hơn 50.000 \n\n", con);
        printf("Bạn cần rút bao nhiêu tiền? (Bội của 1000) ");
        scanf("%d", &rut);
    }
    while (rut > 0)
    {
        temp = rut / menhgia[i]; // số tờ cần rút ra với từng mệnh giá 500, 200, 100, 50
        if (temp > soto[i])
        {
            temp = soto[i];
            rut = rut - temp * menhgia[i];
        }
        else
            rut = rut % menhgia[i]; // phần còn lại sau khi rút số tờ với mệnh giá trên
        printf(" Hãy lấy %4d tờ: %4d.000 \n", temp, menhgia[i]);
        i++;
    }
    return 0;
}