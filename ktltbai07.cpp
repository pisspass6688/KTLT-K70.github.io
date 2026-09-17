//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: 07
/*
Bài 07(ktltbai07.cpp): Cho dãy số nguyên a1, a2, a3,... an. Xóa phần tử thứ k (1<=k<=n) trong dãy số.
Đưa ra màn hình dãy số ban đầu và dãy số sau khi xóa.
*/
#include <stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai báo biến
    int a[100];
    int n, k;

    // Giao diện nhập số lượng phần tử n và vị trí cần xóa
    printf("Nhập n: ");
    scanf("%d", &n);

    printf("Nhập dãy số:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Nhập vị trí k cần xóa: ");
    scanf("%d", &k);

    // Đưa ra màn hình dãy số ban đầu
    printf("Dãy số ban đầu: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Xóa phần tử thứ k (1<=k<=n) trong dãy số.
    for (int i = k - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    // Sau khi xóa, số lượng phần tử của dãy giảm đi 1
    n--;

    // Đưa ra màn hình dãy số sau khi xóa
    printf("\nDãy số sau khi xóa: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    cout<<enld;
    return 0;
}
// == đinh nghia ham ===

