//Ho ten: Le Tuan Tu
//MaSV: 6622345
//Lop: K66CNPMC
//De: 
/*
Bài 01(ktltbai01.cpp): Giải hệ phương trình bậc nhất
a1x + b1y = c1
a2x + b2y = c2
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    float a1,b1,c1,a2,b2,c2,d,dx,dy;

    //Nhap cac he so
    printf("GIAI HE PHUONG TRINH BAC NHAT");
    printf("\n\ta1x + b1y = c1");
    printf("\n\ta2x + b2y = c2");

    printf("\n\nNhap he so a1,b1,c1: ");
    scanf("%f%f%f",&a1,&b1,&c1);
    printf("Nhap he so a2,b2,c2: ");
    scanf("%f%f%f",&a2,&b2,&c2);
    
    //Tinh cac dinh thuc
    d = a1*b2 - a2*b1;
    dx = c1*b2 - c2*b1;
    dy = a1*c2 - a2*c1;

    //Dua ra nghiem
    if(d)
    {
	float x = dx/d;
	float y = dy/d;
	
	printf("\nHe phuong trinh co nghiem la:");
	printf("\nx = %0.1f\ny = %0.1f",x,y);
    }
    else if(dx==0 && dy==0) printf("\nHe phuong trinh vo so nghiem!");
    else printf("\nHe phuong trinh vo nghiem!");

    cout<<endl;
    return 0;
}
//===dinh nghia ham===


