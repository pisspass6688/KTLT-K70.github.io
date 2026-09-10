//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De:03
/*
Bài 03(ktltbai03.cpp): Viết chương trình tính tổng Q = 1.1! + 2.2! +.. + n.n!.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    int n,i,gt = 1,Tong = 0;
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        gt = gt * i;
        Tong = Tong + i * gt;
    }
    
    printf("\n\nTổng = %d\n", Tong);

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===

