//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: 02
/*
Bài 02(ktltbai02.cpp): Nhập vào 1 số nguyên dương có 2 chữ số.
Đưa ra dạng đọc của số nguyên đó.
Ví dụ: 23 => đọc là Hai ba; 90 => đọc là Chín mươi.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai báo biến
    int n;
    
    //Giao diện tương tác
    printf("\n\n=== Chương trình đọc 1 số nguyên dương có 2 chữ số ===\n\n");
    printf("Vui lòng nhập số nguyên dương có 2 chữ số: ");
    scanf("%d", &n);
    
    //Kiểm tra
    if (n % 2 == 0)
    {
	switch(n)
	{
	    case 10:
		printf("Đọc là Mười");
		break;
	    case 12:
		printf("Đọc là Mười Hai");
		break;
	    case 14:
		printf("Đọc là Mười Bốn");
		break;
	    case 16:
		printf("Đọc là Mười Sáu");
		break;
	    case 18:
		printf("Đọc là Mười Tám");
		break;
	    case 20:
		printf("Đọc là Hai Mươi");
		break;
	    case 22:
		printf("Đọc là Hai Mươi Hai");
		break;
	    case 24:
		printf("Đọc là Hai Mươi Bốn");
		break;
	    case 26:
		printf("Đọc là Hai Mươi Sáu");
		break;
	    case 28:
		printf("Đọc là Hai Mươi Tám");
		break;
	    case 30:
		printf("Đọc là Ba Mươi");
		break;
	    case 32:
		printf("Đọc là Ba Mươi Hai");
		break;
	    case 34:
		printf("Đọc là Ba Mươi Tư");
		break;
	    case 36:
		printf("Đọc là Ba Mươi Sáu");
		break;
	    case 38:
		printf("Đọc là Ba Mươi Tám");
		break;
	    case 40:
		printf("Đọc là Bốn Mươi");
		break;
	    case 42:
		printf("Đọc là Bốn Mươi Hai");
		break;
	    case 44:
		printf("Đọc là Bốn Mươi Bốn");
		break;
	    case 46:
		printf("Đọc là Bốn Mươi Sáu");
		break;
	    case 48:
		printf("Đọc là Bốn Mươi Tám");
		break;
	    case 50:
		printf("Đọc là Năm Mươi");
		break;
	    case 52:
		printf("Đọc là Năm Mươi Hai");
		break;
	    case 54:
		printf("Đọc là Năm Mươi Bốn");
		break;
	    case 56:
		printf("Đọc là Năm Mươi Sáu");
		break;
	    case 58:
		printf("Đọc là Năm Mươi Tám");
		break;
	    case 60:
		printf("Đọc là Sáu Mươi");
		break;
	    case 62:
		printf("Đọc là Sáu Mươi Hai");
		break;
	    case 64:
		printf("Đọc là Sáu Mươi Bốn");
		break;
	    case 66:
		printf("Đọc là Sáu Mươi Sáu");
		break;
	    case 68:
		printf("Đọc là Sáu Mươi Tám");
		break;
	    case 70:
		printf("Đọc là Bảy Mươi");
		break;
	    case 72:
		printf("Đọc là Bảy Mươi Hai");
		break;
	    case 74:
		printf("Đọc là Bảy Mươi Bốn");
		break;
	    case 76:
		printf("Đọc là Bảy Mươi Sáu");
		break;
	    case 78:
		printf("Đọc là Bảy Mươi Tám");
		break;
	    case 80:
		printf("Đọc là Tám Mươi");
		break;
	    case 82:
		printf("Đọc là Tám Mươi Hai");
		break;
	    case 84:
		printf("Đọc là Tám Mươi Bốn");
		break;
	    case 86:
		printf("Đọc là Tám Mươi Sáu");
		break;
	    case 88:
		printf("Đọc là Tám Mươi Tám");
		break;
	    case 90:
		printf("Đọc là Chín Mươi");
		break;
	    case 92:
		printf("Đọc là Chín Mươi Hai");
		break;
	    case 94:
		printf("Đọc là Chín Mươi Tư");
		break;
	    case 96:
		printf("Đọc là Chín Mươi Sáu");
		break;
	    case 98:
		printf("Đọc là Chín Mươi Tám");
		break;
	    default:
		printf("Bạn có chắc đây là số có Hai chữ số?");
	}
    }
    else
    {
	printf("Bạn có chắc đây là số có Hai Chữ Số CHẴN?");
    }
    
    printf("\n\n");
    cout<<endl;
    return 0;
}
//===Dinh nghia ham===

