//Ho Ten: Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: Tính chu vi diện tích hình tròn
#include<iostream>
#include<stdio.h>

using namespace std;

//===Chương trình chính===
int main()
{
    //Khởi tạo biến và yêu cầu người dùng nhập dữ liệu  r đã biết
    double r,c,s;
    printf("Chương trình tính chu vi và diện tích hình tròn\n\n");
    printf("Hãy cho biết R = ");
    scanf("%lf", &r);
    
    //phép tính
    c = 2 * 3.1415 * r;
    s = 3.1415 * r * r;

    printf("Chu vi hình tròn = %0.1lf", c);
    printf("\nDiện tích hình tròn = %0.1lf", s);
    
    cout<<endl;
    return 0;
}