//Ho ten: Le Tuan Tu
//MaSV: 682231
//Lop: K68CNTTC
//De: Viết chương trình nhập vào tháng và năm,
//cho biết tháng trong năm đó có bao nhiêu ngày.
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int thang,nam;

    //Nhap thang va nam
    printf("Nhap vao thang: ");scanf("%d",&thang);
    printf("Nhap vao nam: ");scanf("%d",&nam);

    //Dua ra so ngay cua thang
    switch(thang)
    {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	    printf("Thang nay co 31 ngay!");
	    break;
	case 4:
	case 6:
	case 9:
	case 11:
	    printf("Thang nay co 30 ngay!");
	    break;
	case 2:
	    if(nam%4==0) printf("Thang nay co 29 ngay!");
	    else printf("Thang nay co 28 ngay!");
	    break;
	default:
	    printf("Thang nhap vao khong dung!");
    }

    cout<<endl;
    return 0;
}
//===dinh nghia ham===


