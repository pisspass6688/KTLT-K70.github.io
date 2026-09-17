//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: 10
/*
Bài 10(ktltbai10.cpp): Cho hai ma trận số nguyên A,B có m hàng, n cột. Tính tổng 2 ma trận: C = A + B.
Đưa ma trận A, B, C ra màn hình theo định dạng hàng, cột.
*/
#include<iostream>
#include <stdio.h>

using namespace std;

//Thêm kiểu dữ liệu cho chương trình
struct MaTran
{
    int a[100][100];
    int m, n;
};

//=== Chương trình Chính ===
int main()
{
    //Khai báo biến thuộc kiểu MaTran
    MaTran A, B, C;

    // Nhập số hàng và số cột
    printf("Chương trình tính tổng 2 ma trận: C = A + B\n");
    printf("Nhập số hàng: ");
    scanf("%d", &A.x);

    printf("Nhập số cột: ");
    scanf("%d", &A.);

    //Đề bài nói A và B có cùng m hàng, n cột => B và C cùng kích thước
    B.m = A.m;
    B.n = A.n;
    C.m = A.m;
    C.n = A.n;

    //Nhập ma trận A
    printf("Nhập Ma Trận A:\n");
    for (int i = 0; i < A.m; i++)
    {
        for (int j = 0; j < A.n; j++)
        {
            scanf("%d", &A.a[i][j]);
        }
    }

    //Nhập ma trận B
    printf("Nhập Ma Trận B:\n");
    for (int i = 0; i < B.m; i++)
    {
        for (int j = 0; j < B.n; j++)
        {
            scanf("%d", &B.a[i][j]);
        }
    }

    //Tính C = A + B
    for (int i = 0; i < C.m; i++)
    {
        for (int j = 0; j < C.n; j++)
        {
            C.a[i][j] = A.a[i][j] + B.a[i][j];
        }
    }

    //Đưa ma trận A ra màn hình theo định dạng hàng, cột.
    printf("\nMa Trận A:\n");
    for (int i = 0; i < A.m; i++)
    {
        for (int j = 0; j < A.n; j++)
        {
            printf("%d ", A.a[i][j]);
        }
        printf("\n");
    }

    //Đưa ma trận B ra màn hình theo định dạng hàng, cột.
    printf("\nMa Trận B:\n");
    for (int i = 0; i < B.m; i++)
    {
        for (int j = 0; j < B.n; j++)
        {
            printf("%d ", B.a[i][j]);
        }
        printf("\n");
    }

    //Đưa ma trận C ra màn hình theo định dạng hàng, cột.
    printf("\nMa trận C = A + B:\n");
    for (int i = 0; i < C.m; i++)
    {
        for (int j = 0; j < C.n; j++)
        {
            printf("%d ", C.a[i][j]);
        }
        printf("\n");
    }

    cout<<endl;
    return 0;
}
// == đinh nghia ham ===

