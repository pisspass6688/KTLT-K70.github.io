//Ho ten: Le Tuan Tu
//MaSV: 652231
//Lop: K65CNTTA
//De: 2
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
    //Khai bao bien
    unsigned int n,chuc,donVi;
    
    //Nhap du lieu
    printf("Chương trình đưa ra dạng đọc của số nguyên dương có 2 chữ số");
    printf("\n\nNhập vào 1 số nguyên dương: ");
    scanf("%u",&n);
    
    //Tach chu so hang chuc va don vi
    donVi = n%10;
    chuc = n/10;
    
    //Dua ra dang doc cua so co 2 chu so
    printf("Dạng đọc của %u này là: ",n);    
    //Dua ra hang chuc
    switch(chuc)
    {
	case 1:
	    printf("Mười ");
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
    }
    //Dua ra hang don vi
    switch(donVi)
    {
	case 0:
	    if(chuc != 1) printf("mươi");
	    break;	    
	case 1:
	    printf("một");
	    break;	    
	case 2:
	    printf("hai");
	    break;	    
	case 3:
	    printf("ba");
	    break;
	case 4:
	    printf("bốn");
	    break;
	case 5:
	    printf("năm");
	    break;
	case 6:
	    printf("sáu");
	    break;
	case 7:
	    printf("bảy");
	    break;
	case 8:
	    printf("tám");
	    break;
	case 9:
	    printf("chín");
    }

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

