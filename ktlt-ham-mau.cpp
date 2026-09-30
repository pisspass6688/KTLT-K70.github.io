//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTC
//De: 
/*
(ktlt-ham.cpp) Viết chương trình tính tổ hợp chập k của n, C(k, n).
Trong chương trình có khai báo và định nghĩa hai hàm,
một hàm tính giai thừa và một hàm tính tổ hợp chập k của n.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao ham
unsigned int giaiThua(int n);
unsigned int toHop(int k,int n);

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int k,n;

    //Nhap k va n
    printf("Chuong trinh tinh to hop chap k cua n, C(k,n)\n\n");
    do
    {
	printf("Nhap k(k>=0): ");
	scanf("%d",&k);

	if(k<0) printf("Gia tri cua k phai >= 0. Nhap lai!\n");
    }
    while(k<0);

    do
    {
	printf("Nhap n(>=%d): ",k);
	scanf("%d",&n);

	if(n<k) printf("Gia tri cua n phai >= %d. Nhap lai!\n",k);
    }
    while(n<k);

    printf("To hop chap %d cua %d la: %u",k,n,toHop(k,n));

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
unsigned int giaiThua(int n)
{
    if(n==0) return 1;

    //Tinh n!
    unsigned int gt=1;
    for(int i=2;i<=n;i++) gt*=i;

    //Tra ve ket qua n!
    return gt;
}

unsigned int toHop(int k,int n)
{
    if(k>n) return 0;

    return giaiThua(n)/giaiThua(k)/giaiThua(n-k);
}


