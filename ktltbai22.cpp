
//HọTên: Nguyễn Phụ Mạnh
//MãSV: 7060323
//Lớp: K70CNTTA
//Đề: 22
/*
Bài 22(ktltbai22.cpp): Viết chương trình đưa ra các số nguyên tố trong khoảng từ 1 đến n.
Yêu cầu trong chương trình có sử dụng hàm tự tạo để kiểm tra một số nguyên có phải là số nguyên tố không.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao ham
int kiemTraSNT(int n);

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    unsigned int n;

    //Nhap n
    printf("Chuong trinh dua ra cac so nguyen to tu 1 den n\n\n");
    do
    {
        printf("Nhap n (n>=1): ");
        scanf("%u",&n);

        if(n<1) printf("n phai >= 1. Nhap lai!\n");
    }
    while(n<1);

    //Dua ra cac so nguyen to
    printf("Cac so nguyen to tu 1 den %u la: ",n);
    for(int i=2;i<=n;i++)
        if(kiemTraSNT(i))
            printf("%u ",i);

    cout<<endl;
    return 0;
}

//===dinh nghia ham===
int kiemTraSNT(int n)
{
    if(n<2) return 0;

    for(int i=2;i<n;i++)
        if(n%i==0) return 0;

    return 1;
}