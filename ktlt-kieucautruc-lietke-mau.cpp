//Ho ten: Le Tuan Tu
//MaSV: 6622345
//Lop: K66TMDTB
//De: 
/*
Nhập vào thông tin của n cán bộ,
mỗi cán bộ có mã cán bộ, họ tên, ngày sinh, giới tính;
ngày sinh có ngày, tháng, năm; giới tính là Nam/Nu.
Đưa ra màn hình thông tin của các cán bộ đã nhập
kèm theo tuổi của cán bộ.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao kieu cau truc ngay thang
struct NgayThang
{
    unsigned char ngay,thang;
    unsigned int nam;
};

//Khai bao kieu liet ke gioi tinh
enum GioiTinh {Nam,Nu};

//Khai bao kieu cau truc can bo
struct CanBo
{
    char maCB[21];
    char hoTen[35];
    NgayThang ngaySinh;
    GioiTinh gt;
};

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int n;
    CanBo ds[100];
    char kt;

    //Nhap vao danh sach can bo
    printf("Chuong trinh nhap va dua ra thong tin cua n can bo");
    printf("\n\nNhap vao so can bo, n= "); 
    scanf("%d",&n);

    printf("Nhap vao danh sach can bo:\n");
    for(int i=0;i<n;i++)
    {
	printf("Nhap thong tin can bo thu %d:\n",i+1);
	printf("\tMa can bo: "); scanf("%s",&ds[i].maCB);
	printf("\tHo ten: ");
	scanf(" "); fgets(ds[i].hoTen,sizeof(ds[i].hoTen),stdin);
	printf("\tNgay sinh (dd/mm/yyyy): ");
	scanf("%u%c%u%c%u",&ds[i].ngaySinh.ngay,&kt,&ds[i].ngaySinh.thang,&kt,&ds[i].ngaySinh.nam);
	printf("\tGioi tinh (0-Nam,1-Nu): ");
	scanf("%u",&ds[i].gt);
    }

    //Dua ra
    printf("\nDanh sach can bo da nhap la:\n");
    for(int i=0;i<n;i++)
    {
	printf("Can bo thu %d:",i+1);
	printf("\n\tMa can bo: %s",ds[i].maCB);
	printf("\n\tHo ten: %s",ds[i].hoTen);
	printf("\tNgay sinh: %02u/%02u/%u",ds[i].ngaySinh.ngay,ds[i].ngaySinh.thang,ds[i].ngaySinh.nam);
	printf("\n\tGioi tinh: %s",ds[i].gt?"Nu":"Nam");
	printf("\n\tTuoi: %d\n\n",2024-ds[i].ngaySinh.nam);
    }

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

