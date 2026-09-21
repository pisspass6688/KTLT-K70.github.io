//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: 06
/*
Bài 06(ktltbai06.cpp): Cho dãy số nguyên a1, a2, a3,... an. Đưa các số lẻ về đầu dãy, các số chẵn về cuối dãy.
Đưa ra màn hình dãy số ban đầu và dãy số sau khi thay đổi.
*/
#include<iostream>
#include <stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    int a[100];
    int n;

    // Giao diện nhập số lượng phần tử và dãy số
    printf("Nhập n: ");
    scanf("%d", &n);

    printf("Nhập dãy số:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //Đưa ra màn hình dãy số ban đầu
    printf("Dãy số ban đầu: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    //Đưa các số lẻ về đầu dãy, các số chẵn về cuối dãy
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            //Nếu i là số chẵn và j là số lẻ thì đổi chỗ hai phần tử
            if (a[i] % 2 == 0 && a[j] % 2 != 0)
            {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }

    //Đưa ra màn hình dãy số sau khi thay đổi
    printf("\nDãy số sau khi thay đổi: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    cout<<endl;
    return 0;
}
// == đinh nghia ham ===

