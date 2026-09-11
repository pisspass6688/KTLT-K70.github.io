//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: 04
/*
Bài 04(ktltbai04.cpp): Viết chương trình tính sinx với độ chính xác 10^-4 theo công thức sau:
    sinx = x - x^3/3! + x^5/5! + ... + (-1)^n*x^(2*n+1)/(2*n+1)! + ...
*/
#include<iostream>
#include<stdio.h>
#include <math.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai báo
    float x, i = 0, s, tg;

    //Giao diện nhập
    printf("=== Chương trình tính sinx với độ chính xác 10^-4 ===\n\n");
    printf("Hãy nhập x cho công thức sau:\nsinx = x - x^3/3! + x^5/5! + ... + (-1)^n*x^(2*n+1)/(2*n+1)! + ...\n\n");
    printf("(Giới hạn chương trình x = 58) Nhập x = ");
    scanf("%f", &x);

    s = x;
    tg = x;

    do
    {
        i += 1;
        tg = -tg * x * x / ((2 * i) * (2 * i + 1));
        s += tg;
    }
    while(fabs(tg) >= 0.0001);

    printf("sin(%0.1f) = %0.4f\n", x, s);

    cout << endl;
    return 0;
}

//===Dinh nghia ham===

