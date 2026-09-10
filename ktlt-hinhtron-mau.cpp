//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTF
//De: Tính diện tích và chu vi hình tròn có bán kính r.
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao hang
#define PI 3.14

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    float r,dt,cv;

    //Nhap ban kinh
    printf("Chuong trinh tinh dien tich va chu vi hinh tron co ban kinh r");
    printf("\n\nNhap vao ban kinh hinh tron: ");
    scanf("%f",&r);

    //Tinh dien tich va chu vi
    dt = PI*r*r;
    cv = 2*PI*r;

    //Dua ra dt va cv tinh duoc
    printf("Dien tich hinh tron la: %0.1f",dt);
    printf("\nChu vi hinh tron la: %0.1f",cv);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

