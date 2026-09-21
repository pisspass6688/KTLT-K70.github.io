//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTD
//De: 7
/*
Bài 07(ktltbai07.cpp): Cho dãy số nguyên a1, a2, a3,... an. Xóa phần tử thứ k (1<=k<=n) trong dãy số.
Đưa ra màn hình dãy số ban đầu và dãy số sau khi xóa.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int n,k,i;
    int a[100];
    
    //Nhap n
    printf("Chuong trinh xoa phan tu thu k trong day n so nguyen");
    printf("\n\nNhap vao so phan tu cua day so,n= ");
    scanf("%d",&n);
    
    //Nhap day so
    printf("Nhap vao day so:\n");
    for(i=0;i<n;i++)
    {
	printf("a%d= ",i+1);
	scanf("%d",&a[i]);
    }
    
    //Dua ra day so truoc khi xoa
    printf("\nDay so da nhap la:\n");
    for(i=0;i<n;i++) printf("%d  ",a[i]);
    
    //Nhap k
    printf("\n");
    do
    {
	printf("\nNhap vao vi tri k cua phan tu can xoa (1<=k<=%d): ",n);
	scanf("%d",&k);
	
	if(k<1 || k>n) printf("Gia tri cua k phai nam trong khoang [1, %d]. Nhap lai!\n",n);
    }
    while(k<1 || k>n);
    
    //Xoa phan tu thu k
    for(i=k-1;i<n-1;i++) a[i] = a[i+1];
    
    //Giam n di 1
    n--;
    
    //Dua ra day so sau khi xoa
    printf("\nDay so sau khi xoa la:\n");
    for(i=0;i<n;i++) printf("%d  ",a[i]);    

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

