//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTC
//De: 00
/*
Giải phương trình bậc 2: ax^2 + bx + c = 0 (a#0)
*/
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    float a,b,c,delta,x1,x2;
    
    //Nhap 3 he so
    printf("Giai phuong trinh bac 2: ax^2 + bx + c = 0 (a#0)");
    printf("\n\nNhap vao 3 he so a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    
    //Tinh delta
    delta = b*b - 4*a*c;
    
    //Tinh nghiem
    if(delta<0) printf("Phuong trinh vo nghiem.");
    else if(delta==0) printf("Phuong trinh co nghiem kep x1 = x2 = %0.1f",-b/(2*a));
    else
    {
	x1 = (-b-sqrt(delta))/(2*a);
	x2 = (-b+sqrt(delta))/(2*a);
	printf("Phuong trinh co 2 nghiem phan biet:");
	printf("\nx1 = %0.1f\nx2 = %0.1f",x1,x2);	
    }

    cout<<endl;
    return 0;
}
//===dinh nghia ham===


