//Ho ten: Le Tuan Tu
//MaSV: 6622345
//Lop: K66TMDTB
//De: 20
/*
Bài 20(ktltbai20.cpp): Viết chương trình quản lý điểm môn học của sinh viên.
Mỗi sinh viên có các thông tin về mã sv, họ tên, lớp, điểm C.Cần,
điểm kiểm tra, điểm thi.
Điểm môn học = 0,1xC.Cần + 0,3xK.Tra + 0,6xThi.
Nhập vào mảng động danh sách n sinh viên.
Tìm và đưa ra thông tin về sinh viên có điểm môn học cao nhất.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//Khai báo kiểu cấu trúc sinh viên
struct SinhVien
{
    char maSV[21];
    char hoTen[35];
    char lop[21];
    float diemCC,diemKT,diemThi;
};

//===chương trình chính===
int main()
{
    //Khai báo biến
    int n,i,vt;
    SinhVien *ds;
    float diemMon,max;
    char maSVTim[21];

    //Nhập vào số sinh viên
    printf("Chương trình quản lý điểm môn học của sinh viên");
    printf("\n\nNhập vào số sinh viên, n= ");
    scanf("%d",&n);

    //Cấp phát mảng động danh sách sinh viên
    ds = new SinhVien[n];

    //Nhập vào danh sách sinh viên
    printf("\nNhập vào danh sách sinh viên:\n");
    for(i=0;i<n;i++)
    {
        printf("Nhập thông tin sinh viên thứ %d:\n",i+1);

        printf("\tMã sinh viên: ");
        scanf("%s",ds[i].maSV);

        printf("\tHọ tên: ");
        scanf(" ");
        fgets(ds[i].hoTen,sizeof(ds[i].hoTen),stdin);

        printf("\tLớp: ");
        scanf("%s",ds[i].lop);

        printf("\tĐiểm C.Cần: ");
        scanf("%f",&ds[i].diemCC);

        printf("\tĐiểm kiểm tra: ");
        scanf("%f",&ds[i].diemKT);

        printf("\tĐiểm thi: ");
        scanf("%f",&ds[i].diemThi);
    }

    //Tìm sinh viên có điểm môn học cao nhất
    max = -1;
    vt = 0;

    for(i=0;i<n;i++)
    {
        diemMon = 0.1*ds[i].diemCC
                + 0.3*ds[i].diemKT
                + 0.6*ds[i].diemThi;

        if(diemMon>max)
        {
            max = diemMon;
            vt = i;
        }
    }

    //Đưa ra sinh viên có điểm môn học cao nhất
    printf("\nSinh viên có điểm môn học cao nhất là:\n");
    printf("\tMã sinh viên: %s\n",ds[vt].maSV);
    printf("\tHọ tên: %s",ds[vt].hoTen);
    printf("\tLớp: %s\n",ds[vt].lop);
    printf("\tĐiểm C.Cần: %.2f\n",ds[vt].diemCC);
    printf("\tĐiểm kiểm tra: %.2f\n",ds[vt].diemKT);
    printf("\tĐiểm thi: %.2f\n",ds[vt].diemThi);
    printf("\tĐiểm môn học: %.2f\n",max);

    //Tìm sinh viên theo mã sinh viên
    printf("\nNhập mã sinh viên cần tìm: ");
    scanf("%s",maSVTim);

    vt = -1;

    for(i=0;i<n;i++)
    {
        if(strcmp(ds[i].maSV,maSVTim)==0)
        {
            vt = i;
            break;
        }
    }

    //Đưa ra thông tin sinh viên tìm được
    if(vt!=-1)
    {
        diemMon = 0.1*ds[vt].diemCC
                + 0.3*ds[vt].diemKT
                + 0.6*ds[vt].diemThi;

        printf("\nThông tin sinh viên cần tìm:\n");
        printf("\tMã sinh viên: %s\n",ds[vt].maSV);
        printf("\tHọ tên: %s",ds[vt].hoTen);
        printf("\tLớp: %s\n",ds[vt].lop);
        printf("\tĐiểm C.Cần: %.2f\n",ds[vt].diemCC);
        printf("\tĐiểm kiểm tra: %.2f\n",ds[vt].diemKT);
        printf("\tĐiểm thi: %.2f\n",ds[vt].diemThi);
        printf("\tĐiểm môn học: %.2f\n",diemMon);
    }
    else
        printf("\nKhông tìm thấy sinh viên có mã %s.",maSVTim);

    //Giải phóng bộ nhớ mảng động
    delete[] ds;

    cout<<endl;
    return 0;
}
//===định nghĩa hàm===