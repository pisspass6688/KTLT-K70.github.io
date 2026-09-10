//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTF
//De: Tìm ước số chung lớn nhất của a và b.
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //khai bao bien
    unsigned int a,b,r;

    printf("Tim uoc chung lon nhat cua hai so nguyen duong a,b");

    //Nhap 2 so nguyen duong
    printf("\n\nNhap vao 2 so nguyen duong a,b: ");
    scanf("%u%u",&a,&b);

    //Tim USCLN
    r = a%b;
    while(r)
    {
	a = b; b = r; r = a%b;
    }

    //Dua ra ket qua
    printf("Uoc so chung lon nhat la: %u",b);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

