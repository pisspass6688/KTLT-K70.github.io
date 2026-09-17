//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: 13
/*
Bài 13(ktltbai13.cpp): Nhập vào một xâu ký tự số nhị phân có tối đa 16 bit.
Đưa ra giá trị của số nhị phân đó.
*/
#include<iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// === chương trình chính ===
int main()
{
    //Khai báo biến và một xâu ký tự số nhị phân có tối đa 16 bit
    int n, kq = 0; 
    char s[17];

    // Tên chương trình
    printf("Chương trình đổi số nhị phân sang số thập phân\n");

    // Nhập xâu nhị phân
    printf("Nhập xâu ký tự số nhị phân (tối đa là 16 ký tự): ");
    scanf("%16s", s);

    // Lấy độ dài xâu
    n = strlen(s);

    // Đổi từ nhị phân sang thập phân
    for (int i = 0; i < n; i++)
    {
        //Công thức
        kq = kq * 2 + (s[i] - '0');
    }

    //Đưa ra giá trị của số nhị phân đó
    printf("Giá trị của số nhị phân là: %d\n", kq);

    cout<<endl;
    return 0;
}
// == đinh nghia ham ===

