//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTF
//De: 
/*
Nhập vào một số nguyên dương.
Đưa ra xâu ký tự số nhị phân tương ứng.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    unsigned int n,thuong,du,len,i;
    char soNP[33]="";
    char tg;

    //Nhap n
    printf("Chuong trinh chuyen so nguyen duong he 10 sang he 2");
    printf("\n\nNhap vao 1 so nguyen duong: ");
    scanf("%u",&n);

    //Chuyen n thanh xau chu so 0,1
    thuong = n;
    while(thuong)
    {
	du = thuong%2;
	thuong /= 2;
	if(du) strcat(soNP,"1");
	else strcat(soNP,"0");
    }

    //Dao xau de duoc xau ky tu so nhi phan
    len = strlen(soNP);
    for(i=0;i<len/2;i++)
    {
	tg = soNP[i];
	soNP[i] = soNP[len-1-i];
	soNP[len-1-i] = tg;
    }

    //Dua ra
    printf("So nhi phan cua %u la: %s",n,soNP);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

