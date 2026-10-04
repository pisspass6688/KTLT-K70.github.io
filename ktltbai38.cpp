//HọTên: Nguyễn Phụ Mạnh
//MãSV: 7060323
//Lớp: K70CNTTA
//Đề: 38
/*
Bai 38(ktltbai38.cpp): Viet chuong trinh nhap vao thong tin cua sinh vien
cho toi khi khong muon nhap nua.
Moi sinh vien co thong tin ve ma sv, ho ten, diem tbc.
Ghi thong tin cua cac sinh vien ra tep nhi phan "sinhvien.dat".
Doc tep "sinhvien.dat" va cho biet tren tep co bao nhieu sinh vien.
Dua ra thong tin cua sinh vien thu m va sua diem tbc cua sinh vien nay.
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
    float tbc;
};

//Khai bao ham
unsigned int ghiTep(FILE *fp);
unsigned int demSinhVien(FILE *fp);
unsigned int duaRa(SinhVien sv);
unsigned int suaDiem(int m);

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    FILE *fp;
    int n,m;

    //Mo tep nhi phan de ghi
    fp=fopen("sinhvien.dat","wb");
    if(fp==NULL)
    {
        printf("Khong mo duoc tep sinhvien.dat!");
        return 1;
    }

    //Nhap va ghi thong tin sinh vien
    ghiTep(fp);

    //Dong tep
    fclose(fp);

    //Mo tep de doc
    fp=fopen("sinhvien.dat","rt");
    if(fp==NULL)
    {
        printf("Khong mo duoc tep sinhvien.dat!");
        return 1;
    }

    //Dem so sinh vien tren tep
    n=demSinhVien(fp);

    printf("\nTren tep co %d sinh vien.",n);

    //Nhap vi tri sinh vien can dua ra
    printf("\n\nNhap sinh vien thu m can dua ra, m= ");
    scanf("%d",&m);

    if(m<1 || m>n)
    {
        printf("Vi tri m khong hop le!");
    }
    else
    {
        SinhVien sv;

        //Dua con tro tep den sinh vien thu m
        fseek(fp,(m-1)*sizeof(SinhVien),SEEK_SET);

        //Doc sinh vien thu m
        fread(&sv,sizeof(SinhVien),1,fp);

        //Dua thong tin sinh vien thu m
        printf("\nThong tin sinh vien thu %d:\n",m);
        duaRa(sv);

        //Dong tep
        fclose(fp);

        //Sua diem TBC
        suaDiem(m);
    }

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

//Ham nhap va ghi thong tin sinh vien vao tep
unsigned int ghiTep(FILE *fp)
{
    SinhVien sv;
    char tiep;

    do
    {
        printf("\nNhap thong tin sinh vien:\n");

        printf("\tMa sinh vien: ");
        scanf("%s",&sv.maSV);

        printf("\tHo ten: ");
        scanf(" ");
        fgets(sv.hoTen,sizeof(sv.hoTen),stdin);

        printf("\tDiem TBC: ");
        scanf("%f",&sv.tbc);

        //Ghi sinh vien vao tep
        fwrite(&sv,sizeof(SinhVien),1,fp);

        printf("\nTiep tuc nhap? (c/k): ");
        scanf(" %c",&tiep);
    }
    while(tiep=='c' || tiep=='C');

    return 1;
}

//Ham dem so sinh vien tren tep
unsigned int demSinhVien(FILE *fp)
{
    long kichThuoc;
    unsigned int n;

    //Dua con tro tep ve cuoi tep
    fseek(fp,0,SEEK_END);

    //Lay kich thuoc tep
    kichThuoc=ftell(fp);

    //Tinh so sinh vien
    n=kichThuoc/sizeof(SinhVien);

    return n;
}

//Ham dua thong tin sinh vien ra man hinh
unsigned int duaRa(SinhVien sv)
{
    printf("\tMa sinh vien: %s",sv.maSV);
    printf("\tHo ten: %s",sv.hoTen);
    printf("\tDiem TBC: %.1f\n",sv.tbc);

    return 1;
}

//Ham sua diem TBC cua sinh vien thu m
unsigned int suaDiem(int m)
{
    FILE *fp;
    SinhVien sv;
    float diemMoi;

    //Mo tep de doc va ghi
    fp=fopen("sinhvien.dat","rb+");

    if(fp==NULL)
    {
        printf("Khong mo duoc tep sinhvien.dat!");
        return 0;
    }

    //Nhap diem moi
    printf("\nNhap diem TBC moi cua sinh vien thu %d: ",m);
    scanf("%f",&diemMoi);

    //Dua con tro tep den sinh vien thu m
    fseek(fp,(m-1)*sizeof(SinhVien),SEEK_SET);

    //Doc sinh vien thu m
    fread(&sv,sizeof(SinhVien),1,fp);

    //Sua diem TBC
    sv.tbc=diemMoi;

    //Dua con tro tep ve sinh vien thu m
    fseek(fp,(m-1)*sizeof(SinhVien),SEEK_SET);

    //Ghi lai thong tin sinh vien
    fwrite(&sv,sizeof(SinhVien),1,fp);

    //Dong tep
    fclose(fp);

    printf("Da sua diem TBC cua sinh vien thu %d.",m);

    return 1;
}