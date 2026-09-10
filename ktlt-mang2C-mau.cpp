//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTF
//De: 
/*
Cho ma trận nguyên có m hàng, n cột.
Tính tổng và TBC các phần tử của ma trận.
Đưa ma trận đã nhập ra màn hình theo định dạng hàng, cột.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{   
    //Khai bao bien
    int m,n,i,j,s=0;
    int a[10][10];

    //Nhap vao ma tran
    printf("Tinh tong va tbc cac phan tu cua ma tran nguyen Amxn");
    printf("\n\nNhap vao so hang(m),so cot(n) cua ma tran: ");
    scanf("%d%d",&m,&n);

    printf("Nhap vao cac phan tu cua ma tran:\n");
    for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
	    printf("a%d%d= ",i+1,j+1);
	    scanf("%d",&a[i][j]);
	}

    //Tinh tong cac phan tu cua ma
    for(i=0;i<m;i++)
	for(j=0;j<n;j++) s += a[i][j];

    //Dua ra ma tran
    printf("\nMa tran da nhap la:\n");
    for(i=0;i<m;i++)
    {
	//Dua ra hang i
	for(j=0;j<n;j++) printf("%6d",a[i][j]);

	//Xuong dong
	printf("\n");
    }

    //Dua ra tong va tbc
    printf("\nTong cac phan tu cua ma tran la: %d",s);
    printf("\nTBC cac phan tu cua ma tran la: %0.1f",(float)s/(m*n));

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

