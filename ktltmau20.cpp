//Ho ten: Le Tuan Tu
//MaSV: 672234
//Lop: K67CNTTC
//De: 
/*
Bài 20(ktltbai20.cpp): Viết chương trình quản lý điểm môn học của sinh viên. Mỗi sinh viên có các thông tin về mã sv,
họ tên, lớp, điểm C.Cần, điểm kiểm tra, điểm thi. Điểm môn học = 0,1xC.Cần + 0,3xK.Tra + 0,6xThi.
Nhập vào mảng động danh sách n sinh viên. Tìm và đưa ra thông tin về sinh viên có điểm môn học cao nhất.
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//Khai bao kieu cau truc sinh vien
struct SinhVien
{
    char maSV[11];
    char hoTen[45];
    char lop[11];
    float ccan,ktra,thi;
};

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int n,vtmax;
    float max;

    //Nhap vao so luong sv
    printf("Chuong trinh quan ly diem mon hoc cua sinh vien");
    printf("\n\nNhap so luong sinh vien: ");
    scanf("%d",&n);

    //Tao mang dong co kich thuoc n de chua n sinh vien
    SinhVien *a = (SinhVien*)calloc(n,sizeof(SinhVien));

    //Nhap thong tin sv
    printf("Nhap thong tin cua %d sinh vien:",n);
    for(int i=0;i<n;i++)
    {
	printf("\nNhap sinh vien thu %d:\n",i+1);
	printf("\tMa sinh vien: "); scanf("%s",&a[i].maSV);
	printf("\tHo ten: "); scanf(" "); fgets(a[i].hoTen,sizeof(a[i].hoTen),stdin);
	printf("\tLop: "); scanf("%s",&a[i].lop);
	printf("\tDiem C.Can: "); scanf("%f",&a[i].ccan);
	printf("\tDiem K.Tra: "); scanf("%f",&a[i].ktra);
	printf("\tDiem Thi: "); scanf("%f",&a[i].thi);
    }

    //Tim vi tri sv co diem mon hoc lon nhat
    max = 0.1*a[0].ccan + 0.3*a[0].ktra + 0.6*a[0].thi;
    vtmax = 0;

    for(int i=1;i<n;i++)
    {
	//Tinh diem mon hoc cua sv thu i
	float diemMH = 0.1*a[i].ccan + 0.3*a[i].ktra + 0.6*a[i].thi;

	//Tim diem mon hoc lon hon
	if(diemMH > max)
	{
	    max = diemMH;
	    vtmax = i;
	}
    }

    //Dua ra danh sach sv da nhap
    printf("\n\nDANH SACH SINH VIEN DA NHAP LA:");
    for(int i=0;i<n;i++)
    {
	printf("\nSinh vien thu %d:",i+1);
	printf("\n\tMa sinh vien: %s",a[i].maSV);
	printf("\n\tHo ten: %s",a[i].hoTen);
	printf("\tLop: %s",a[i].lop);
	printf("\n\tDiem C.Can: %0.1f",a[i].ccan);
	printf("\n\tDiem K.Tra: %0.1f",a[i].ktra);
	printf("\n\tDiem Thi: %0.1f",a[i].thi);
	printf("\n\tDiem MH: %0.1f\n",0.1*a[i].ccan + 0.3*a[i].ktra + 0.6*a[i].thi);
    }

    //Dua ra sv co diem mh lon nhat
    printf("\n\nSinh vien co diem mon hoc cao nhat la sv thu %d:",vtmax+1);
    printf("\n\tMa sinh vien: %s",a[vtmax].maSV);
    printf("\n\tHo ten: %s",a[vtmax].hoTen);
    printf("\tLop: %s",a[vtmax].lop);
    printf("\n\tDiem C.Can: %0.1f",a[vtmax].ccan);
    printf("\n\tDiem K.Tra: %0.1f",a[vtmax].ktra);
    printf("\n\tDiem Thi: %0.1f",a[vtmax].thi);
    printf("\n\tDiem MH: %0.1f\n",max);

    //Huy mang dong
    free(a);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

