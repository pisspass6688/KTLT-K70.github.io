//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De:01
/*
Bài 01(ktltbai01.cpp): Giải hệ phương trình bậc nhất
a1x + b1y = c1
a2x + b2y = c2
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai báo biến
    float a1, b1, c1, a2, b2, c2, x, y;
    
    //Giao diện tương tác
    printf("=== Giải Hệ Phương trình bậc nhất ===\n\n");
    printf("a1x + b1y = c1\na2x + b2y = c2\n\n");
    printf("Vui lòng nhập a1 = ");
    scanf("%f", &a1);
    printf("Vui lòng nhập b1 = ");
    scanf("%f", &b1);
    printf("Vui lòng nhập c1 = ");
    scanf("%f", &c1);
    printf("Vui lòng nhập a2 = ");
    scanf("%f", &a2);
    printf("Vui lòng nhập b2 = ");
    scanf("%f", &b2);
    printf("Vui lòng nhập c2 = ");
    scanf("%f", &c2);
    
    //Kiểm tra
    if (a1 * b2 - a2 * b1 != 0)
    {
	//biểu thức
	x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
	y = (c1 * a2 - c2 * a1) / (a1 * b2 -a2 * b1);
	printf("\n=== Đã tìm thấy nghiệm ===\n\n");
	printf("X đã được tìm thấy = %0.1f", x);
	printf("\nY đã được tìm thấy = %0.1f", y);
    }
    else if (a1 * b2 - a2 * b1 == 0 && b1 * c2 - b2 * c1 == 0 && c1 * a2 - c2 * a1 == 0)
    {
	printf("Hệ Phương trình này có vô số nghiệm");
    }
    else
    {
	printf("Hệ Phương trình này vô nghiệm");
    }
    
    //Kết Bài
    cout<<endl;
    return 0;
}
//===Dinh nghia ham===

