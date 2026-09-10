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

    float x, sinx = 0, term;
        int n = 0;
        
            scanf("%f", &x);
            
                do
                    {
                            int gt = 1;
                            
                            // Tính (2n+1)!
                                    for (int i = 1; i <= 2 * n + 1; i++)
                                    {
                                    gt = gt * i;
                        }
                                                                
                // Tính số hạng
                            term = pow(-1, n) * pow(x, 2 * n + 1) / gt;
                    
                                // Cộng vào tổng
                                        sinx = sinx + term;
                                
                                    // Sang số hạng tiếp theo
                                                        n++;
                                            
                                } while (fabs(term) >= 0.0001);
                            
                            printf("sin(%f) = %f\n", x, sinx);

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===

