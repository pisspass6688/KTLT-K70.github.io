//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De:02
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
    int n,chuc,donVi;
    
    printf("\n\nChương trình đọc số nguyên dương có hai chữ số\n\n");
    printf("Vui lòng nhập số tại đây: ");
    scanf("%d", &n);
    
    if(n >= 10 && n <= 99)
    {
	chuc = n / 10;
        donVi = n % 10;
        
	switch (chuc)
	{
	    case 1:
		printf("Một ");
		break;
	    case 2:
		printf("Hai ");
		break;
	    case 3:
		printf("Ba ");
		break;
	    case 4:
		printf("Bốn ");
		break;
	    case 5:
		printf("Năm ");
		break;
	    case 6:
		printf("Sáu ");
		break;
	    case 7:
		printf("Bảy ");
		break;
	    case 8:
		printf("Tám ");
		break;
	    case 9:
		printf("Chín ");
		break;
	}
	switch (donVi)
	{
	    case 0:
		printf("Không");
	    case 1:
		printf("Một");
		break;
	    case 2:
		printf("Hai");
		break;
	    case 3:
		printf("Ba");
		break;
	    case 4:
		printf("Bốn");
		break;
	    case 5:
		printf("Năm");
		break;
	    case 6:
		printf("Sáu");
		break;
	    case 7:
		printf("Bảy");
		break;
	    case 8:
		printf("Tám");
		break;
	    case 9:
		printf("Chín");
		break;
	}
    }
    else
    {
	printf("Đây không phải số nguyên dương có hai chữ số");
    }
    
    cout<<endl;
    return 0;
}
//===Dinh nghia ham===

