//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTF
//De: Tính gần đúng số pi với n số hạng đầu tiên theo công thức:
//pi/4 = 1 - 1/3 + 1/5 +...+ (-1)^n*1/(2n+1)
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    unsigned int n,i;
    float s=1;

    printf("Tinh gan dung so pi voi n so hang dau tien theo cong thuc:");
    printf("\npi/4 = 1 - 1/3 + 1/5 +...+ (-1)^n*1/(2n+1)");

    //Nhap n
    printf("\n\nNhap vao gia tri cua n: ");
    scanf("%u",&n);

    //Tinh tong ve phai de trong s
    for(i=1;i<=n;i++)
	if(i%2==0) s += 1.0/(2*i+1);
	else s -= 1.0/(2*i+1);

    //Dua ra ket qua
    printf("So pi tinh duoc la: %0.4f",4*s);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

