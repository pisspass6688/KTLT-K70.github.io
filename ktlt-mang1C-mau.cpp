//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTF
//De: 
/*
Cho dãy số nguyên a1, a2,…, an.
Tính tổng và TBC của dãy số.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int n,i,s=0;
    int a[100];

    //Nhap day so
    printf("Tinh tong va tbc cua day so a1,a2...an");
    printf("\n\nNhap vao so phan tu cua day so,n= ");
    scanf("%d",&n);

    printf("Nhap vao day so:\n");
    for(i=0;i<n;i++)
    {
	printf("a%d = ",i+1);
	scanf("%d",&a[i]);
    }

    //Dua ra day so va tinh tong day so
    printf("\nDay so da nhap la:\n");
    for(i=0;i<n;i++)
    {
	printf("%d  ",a[i]);
	s += a[i];
    }

    //Dua ra tong va tbc
    printf("\n\nTong day so la: %d",s);
    printf("\nTrung binh cong cua day so la: %0.1f",(float)s/n);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

