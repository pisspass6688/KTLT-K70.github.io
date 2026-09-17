//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: 07b
/*
Bài 07b(ktltbai07b.cpp): Cho dãy số nguyên a1, a2, a3,... an. Chèn thêm phần tử x vào vị trí thứ k (1<=k<=n)
trong dãy số. Đưa ra màn hình dãy số ban đầu và dãy số sau khi chèn.
*/
#include<iostream>
#include <stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai báo biến
    int n,x,k;
    int a[101];

    //Giao diện nhập số lượng phần tử, các phần tử của mảng, x, k
    printf("\n\n=== Chương trình Chèn phần tử x vào vị trí thứ k trong dãy số. ===");
    printf("\n\tNhập số lượng phần tử n = ");
    scanf("%d", &n);

    printf("\n\tNhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Nhập a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    //Đưa ra màn hình dãy số ban đầu
    printf("\n\tDãy số ban đầu: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\n\tNhập phần tử x cần chèn: ");
    scanf("%d", &x);

    printf("\n\tNhập vị trí k cần chèn (1 <= k <= n): ");
    scanf("%d", &k);

    // Kiểm tra tại vị trí k phải nằm trong khoảng từ 1 đến n
    if (k < 1 || k > n)
    {
        printf("\n=== Vị trí k không đúng ===\n");
        return 0;
    }

    // Bắt đầu từ phần tử cuối cùng và dịch lần lượt về vị trí k
    for (int i = n - 1; i >= k - 1; i--)
    {
        a[i + 1] = a[i];
    }

    // CHÈN PHẦN TỬ X VÀO VỊ TRÍ K
    a[k - 1] = x;

    // Sau khi chèn, số lượng phần tử tăng thêm 1
    n++;

    //Đưa ra màn hình dãy số sau khi chèn
    printf("\n\tDãy số sau khi chèn: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }


    // Kết thúc chương trình
    cout<<endl;
    return 0;
}
// ===Dinh nghia ham ===

