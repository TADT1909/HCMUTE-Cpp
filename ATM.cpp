//ATM.cpp
/*
 *
 * Rút tiền từ ATM
 * biết số tờ tiền 500.000, 200.000, 100.000, 50.000 còn lại trong máy
 * hiển thị số tờ tiền với từng mệnh giá tương ứng cần đưa ra cho khách hàng
 *
 * còn lỗi với trường hợp cần rút xxx50.000 và trong máy không còn đủ tờ 50.000
 *
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    unsigned int rut = 0,
                 con = 0,
                 temp = 0,
                 i = 0,
                 menhgia[] = {500, 200, 100, 50},
                 soto[] = {0, 0, 0, 0};
    for (int j = 0; j < 4; j++)
    {
        cout << "Nhập số tờ tiền " << menhgia[j] << ".000: ";
        cin >> soto[j];
        con = con + menhgia[j] * soto[j];
    }
    cout << " Tổng số tiền ATM hiện tại còn: " << con << ".000\n\n";
    cout << "Bạn cần rút bao nhiêu tiền? (Bội của 1000) ";
    cin >> rut;
    while (rut > con || rut < 50)
    {
        cout << "\nATM hiện tại không còn đủ tiền. Hoặc bạn đã nhập số tiền nhỏ hơn 50.000\nHãy nhập số tiền khác, nhỏ hơn " << con << ".000 và lớn hơn 50.000 \n\n";
        cout << "Bạn cần rút bao nhiêu tiền? (Bội của 1000) ";
        cin >> rut;
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
        cout << " Hãy lấy " << temp << " tờ: " << menhgia[i] << ".000 \n";
        i++;
    }
    return 0;
}
