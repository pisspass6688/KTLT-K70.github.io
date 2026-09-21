//Ho ten: Nguyen Ha Anh
//MaSV: 671182
//Lop: K67CNTTD
//De: 
/*
Bài 10(ktltbai10.cpp): Cho hai ma trận số nguyên A,B có m hàng, n cột. Tính tổng 2 ma trận: C = A + B.
Đưa ma trận A, B, C ra màn hình theo định dạng hàng, cột.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{ 
    //Khai bao bien
    int m,n,i,j;
    int a[10][10],b[10][10],c[10][10];

    //Nhap vao kich thuoc hai ma tran
    printf("Chuong trinh tinh tong 2 ma tran nguyen co kich thuoc mxn: C = A + B");
    printf("\n\nNhap vao kich thuoc cua 2 ma tran A,B: ");
    scanf("%d%d",&m,&n);

    //Nhap vao 2 ma tran
    printf("Nhap vao ma tran A:\n");
    for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
	    printf("a%d%d= ",i+1,j+1);
	    scanf("%d",&a[i][j]);
	}

    printf("\nNhap vao ma tran B:\n");
    for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
	    printf("b%d%d= ",i+1,j+1);
	    scanf("%d",&b[i][j]);
	}

    //Tinh tong 2 ma tran, C = A + B
    for(i=0;i<m;i++)
	for(j=0;j<n;j++) c[i][j] = a[i][j] + b[i][j];

    //Dua ra cac ma tran
    printf("\nMa tran A da nhap la:\n");
    for(i=0;i<m;i++)
    {
	//Dua ra hang i
	for(j=0;j<n;j++)
	    printf("%6d",a[i][j]);
	
	//Xuong dong
	printf("\n");		
    }
    
    printf("\nMa tran B da nhap la:\n");
    for(i=0;i<m;i++)
    {
	//Dua ra hang i
	for(j=0;j<n;j++)
	    printf("%6d",b[i][j]);
	
	//Xuong dong
	printf("\n");		
    }

    printf("\nMa tran C = A + B la:\n");
    for(i=0;i<m;i++)
    {
	//Dua ra hang i
	for(j=0;j<n;j++)
	    printf("%6d",c[i][j]);
	
	//Xuong dong
	printf("\n");		
    }

    cout<<endl;
    return 0;
}
//===dinh nghia ham===


