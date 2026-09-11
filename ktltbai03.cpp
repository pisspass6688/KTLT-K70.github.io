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
    //Khai Báo Biến
    int n,i,gt = 1,Tong = 0;
    
    //Giao diện nhập giới hạn cuối của tổng
    printf("\n\nChương trình tính tổng Q = 1.1! + 2.2! +.. + n.n!\n");
    printf("Nhập n = ");
    scanf("%d", &n);
    
    //Vòng lặp tính tổng
    for(int i = 1; i <= n; i++)
    {
	//Tính giai thừa i!
        gt = gt * i;
        
        //Cộng số hạng i.i! vào tổng
        Tong = Tong + i * gt;
    }
    
    //Write
    printf("\n\nTổng = %d\n", Tong);

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===

