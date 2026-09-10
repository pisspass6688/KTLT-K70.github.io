//Ho Ten: Nguyễn Phụ Mạnh
//Ma SV: 7060323
//Lop: K70CNTTA
//De: 00
/*
Bài 00(ktltbai00.cpp): Giải phương trình bậc 2
ax^2 + bx + c = 0 (a#0)
*/
#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

//===Chương trình chính
int main()
{
    //Khai báo biến
    double a, b, c, delta, Nghiem1, Nghiem2;

    //Giao diện tương tác
    printf("=== Phương trình bậc 2 ===");
    printf("\nCông thức delta b*b - 4ac \n");
    printf("Giá trị của a = ");
    scanf("%lf", &a);
    printf("Giá trị của b = ");
    scanf("%lf", &b);
    printf("Giá trị của c = ");
    scanf("%lf", &c);
    
    //Kiểm tra lần 1
    if (a == 0)
    {
	printf("\n\nĐây là phương trình bậc 1");
    }
    else{
	//Phép tính
	delta = b * b - 4 * a * c;
    
	//Kiểm tra lần 2
	if (delta < 0)
	{
	    printf("\n\n=== Phương trình bậc hai này của bạn VÔ NGHIỆM ===\n\n");
	    printf("ax^2 + bx + c = 0 (a#0)\n(a#0)\n(a#0)\n(a#0)\n");
	    printf("\n=== Vui lòng chạy lại chương trình và nhập đúng điều kiện ===\n");
	}
	else if (delta == 0)
	{
	    Nghiem1 = -b / (2 * a);
	    printf("\n\nPhương trình này có nghiệm kép x = %0.1lf", Nghiem1);
	}
	else
	{
	    Nghiem1 = (-b + sqrt(delta)) / (2 * a);
	    Nghiem2 = (-b - sqrt(delta)) / (2 * a);
	    printf("=== Phương trình này có hai nghiệm ===\n\n");
	    printf("Nghiệm thứ nhất X = %0.1lf", Nghiem1);
	    printf("Nghiệm thứ hai X = %0.1lf", Nghiem2);
	}
    }
    
    //Kết Thúc
    cout<<endl;
    return 0;
}
//=== dinh nghia ham ===

