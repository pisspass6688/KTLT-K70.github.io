//Ho ten: Le Tuan Tu
//MaSV: 652231
//Lop: K65TMDT
//De: 4
/*
Bài 04(ktltbai04.cpp): Viết chương trình tính sinx với độ chính xác 10^-4 theo công thức sau:
    sinx = x - x^3/3! + x^5/5! + ... + (-1)^n*x^(2*n+1)/(2*n+1)! + ...
*/
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    float x,s,tg;
    int i=0;
    
    printf("Chương trình tính gần đúng sin(x) với độ chính xác 0.0001 theo công thức:");
    printf("\nsinx = x - x^3/3! + x^5/5! + ... + (-1)^n*x^(2*n+1)/(2*n+1)! + ...");

    printf("\n\nNhập vào giá trị của x: ");
    scanf("%f",&x);
    
    //Tinh tong ve phai de vao s
    s = tg = x;
    do
    {
	//Tinh so hang thu i, luu lai trong tg
	i++;
	tg = tg*x*x/(2*i*(2*i+1));
	
	//Cong/tru so hang thu i vao s
	if(i%2==0) s += tg;
	else s -= tg;
    }
    while(fabs(tg)>=0.0001);
    
    //Dua ra ket qua tinh duoc
    printf("sin(x) = %0.4f",s);
    printf("\nHam sin(x) trong thu vien math.h = %0.4f",sin(x));
    
    cout<<endl;
    return 0;
}
//===dinh nghia ham===

