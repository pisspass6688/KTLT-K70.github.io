//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: 04
/*
Bài 04(ktltbai04.cpp): Viết chương trình tính sinx với độ chính xác 10^-4 theo công thức sau:
    sinx = x - x^3/3! + x^5/5! + ... + (-1)^n*x^(2*n+1)/(2*n+1)! + ...
*/
#include<iostream>
#include<stdio.h>
#include <math.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai báo
    float x,i, sinx = 0, t;
        int n = 0, a ;
        
        //Giao diện nhập
        printf("=== Chương trình tính sinx với độ chính xác 10^-4 ===\n\n");
        printf("Hãy nhập x cho công thức sau:\nsinx = x - x^3/3! + x^5/5! + ... + (-1)^n*x^(2*n+1)/(2*n+1)! + ...\n\n");
        printf("Nhập x1 = \n");
        for(i=0;i<n;i++)
        {
            printf("Nhập x%d = ",i+1);
            scanf("%d",&a[i]);
        }
        
        do
        {
            int gt = 1;
	    
            // Tính (2n+1)!
            for (int i = 1; i <= 2 * n + 1; i++)
            {
                gt = gt * i;
            }
	    
            // Tính số hạng
            t = pow(-1, n) * pow(x, 2 * n + 1) / gt;
	    
            // Cộng vào tổng
            sinx = sinx + t;
            
            // Sang số hạng tiếp theo
	    n++;
            }
            while(fabs(t) >= 0.0001);
		printf("sin(%f) = %f\n", x, sinx);

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===

