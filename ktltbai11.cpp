//HọTên: Nguyễn Phụ Mạnh
//MãSV: 7060323
//Lớp: K70CNTTA
//Đề: 11
/*
Bài 11(ktltbai11.cpp): Cho ma trận số nguyên A có kích thước mxp, ma trận số nguyên B có kích thước pxn.
Tính tích 2 ma trận: Cmxn = Amxp x Bpxn.
Đưa ma trận A, B, C ra màn hình theo định dạng hàng, cột.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//===chương trình chính===
int main()
{
    //Khai báo biến
    int m,n,p,i,j,k;
    int a[10][10],b[10][10],c[10][10];

    //Giao diện nhập vào kích thước hai ma trận
    printf("Chương trình tính tích 2 ma trận nguyên: C = A x B");
    printf("\n\nNhập vào kích thước ma trận A (mxp): ");
    scanf("%d%d",&m,&p);
    printf("Nhập vào số cột của ma trận B (n): ");
    scanf("%d",&n);

    //Nhập vào ma trận A
    printf("\nNhập vào ma trận A:\n");
    for(i=0;i<m;i++)
	    for(j=0;j<p;j++)
	    {
	        printf("a%d%d = ",i+1,j+1);
	        scanf("%d",&a[i][j]);
	    }

    //Nhập vào ma trận B
    printf("\nNhập vào ma trận B:\n");
    for(i=0;i<p;i++)
	    for(j=0;j<n;j++)
	    {
	        printf("b%d%d = ",i+1,j+1);
	        scanf("%d",&b[i][j]);
	    }

    //Tính tích 2 ma trận, C = A x B
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<p;k++)
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
        }

    //Đưa ra các ma trận A
    printf("\nMa trận A đã nhập là:\n");
    for(i=0;i<m;i++)
    {
	    //Đưa ra hàng i
	    for(j=0;j<p;j++)
	        printf("%6d",a[i][j]);
	        printf("\n");
    }

    //Đưa ra ma trận B
    printf("\nMa trận B đã nhập là:\n");
    for(i=0;i<p;i++)
    {
	    //Đưa ra hàng i
	    for(j=0;j<n;j++)
	        printf("%6d",b[i][j]);
	        printf("\n");
    }

    //Đưa ra ma trận C
    printf("\nMa trận C = A x B là:\n");
    for(i=0;i<m;i++)
    {
	    //Đưa ra hàng i
	    for(j=0;j<n;j++)
	        printf("%6d",c[i][j]);
	        printf("\n");
    }

    cout<<endl;
    return 0;
}
//===định nghĩa hàm===

