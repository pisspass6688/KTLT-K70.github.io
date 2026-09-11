//
//
//
//
#include <stdio.h>
#include <math.h>

int main() 
{
    //Khởi tạo
    double x, y;
    
    //Giao diện tương tác
    printf("Nhap x: ");
    scanf("%lf", &x);
    
    //Kiểm tra và tính toán
    if (x >= 5) {
        y = pow(5, x) + sqrt(x * x + 4);
    }
    /*else {
	y = fabs(x) + log(x * x + 4) / log(5);
    }
    */
    
    //write
    printf("y = %0.1lf", y);
    
    return 0;
}