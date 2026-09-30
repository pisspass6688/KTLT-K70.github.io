//Ho ten: Le Tuan Tu
//MaSV: 652231
//Lop: K65TMDT
//De: 
/*
Bài 13(ktltbai13.cpp): Nhập vào một xâu ký tự số nhị phân có tối đa 16 bit.
Đưa ra giá trị của số nhị phân đó.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    char soNP[17]="";
    unsigned int s=0,i,len;
    
    //Nhap so nhi phan
    printf("Chương trình tính giá trị của số nhị phân có tối đa 16 bit");
    printf("\n\nNhập vào một số nhị phân (<=16bit): ");
    scanf("%16[01]",&soNP);
	    
    //Tinh gia tri cua so nhi phan
    len = strlen(soNP);
    for(i=0;i<len;i++) s = s*2 + (soNP[i] - 48);

    //Dua ra
    printf("Số nhị phân %s có giá trị là: %u",soNP,s);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

