//Ho Ten: Nguyễn Phụ Mạnh
//Ma SV: 7060323
//Lop: K70CNTTA
//De: Tính diện tích và chu vi hình tam giác có 3 cạnh a, b, c.
#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

//chương trình chính
int main() 
{
    //Khởi tạo biến
    double a, b, c, cv, ncv, dt;
    
    //Giao diện người dùng tương tác với máy
    printf("\n\n=== Chương trình tính chu vi và diện tích tam giác ===\n");
    printf("Vui lòng cung cấp dữ liệu 3 cạnh tam giác(cm)\n\n");
    printf("||  Cạnh thứ nhất = ");
    scanf("%lf", &a);
    printf("||  Cạnh thứ hai = ");
    scanf("%lf", &b);
    printf("||  Cạnh thứ ba = ");
    scanf("%lf", &c);
    
    //Kiểm tra trước khi tính toán
	//Hình tam giác có tổng của hai cạnh lớn hơn cạnh còn lại
    if (a + b > c && a + c > b && b + c > a)
    {
	//phép tính
	cv = a + b + c;
	ncv = cv / 2;
	dt = sqrt(ncv * (ncv - a) * (ncv - b) * (ncv - c));
	
	//write
	printf("\nChu vi tam giác = %0.1lf\n", cv);
	printf("Diện tích tam giác = %0.1lf\n\n", dt);
    }
    else {
        printf("\n\nĐây không phải hình tam giác!\n");
        printf("=== Đóng Chương Trình ===\n\n");
    }
    
    //Kết bài
    cout<<endl;
    return 0;
}
//===Dinh Nghia Ham===

