//HọTên: Nguyễn Phụ Mạnh
//MãSV: 7060323
//Lớp: K70CNTTA
//Đề: 36
/*
Bai 36(ktltbai36.cpp): Cho tep van ban input-bai36.txt chua toa do
cua 2 diem A va B tren mat phang.
Doc toa do cua 2 diem va tinh khoang cach AB.
Ghi ket qua ra tep output-bai36.txt.
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//Khai bao kieu cau truc diem
struct Diem
{
    double x,y;
};

//Khai bao ham
unsigned int docDiem(FILE *fp,Diem &a,Diem &b);
double canBacHai(double x);
unsigned int duaRa(FILE *fp,Diem a,Diem b,double ab);

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    Diem a,b;
    double ab;
    double dx,dy;
    FILE *fp;

    //Mo tep input
    fp=fopen("input-bai36.txt","rt");

    if(fp==NULL)
    {
        printf("Khong mo duoc tep input-bai36.txt!");
        return 1;
    }

    //Doc toa do 2 diem
    docDiem(fp,a,b);

    //Dong tep input
    fclose(fp);

    //Tinh khoang cach AB
    dx=b.x-a.x;
    dy=b.y-a.y;

    ab=canBacHai(dx*dx+dy*dy);

    //Mo tep output
    fp=fopen("output-bai36.txt","w");
    if(fp==NULL)
    {
        printf("Khong mo duoc tep output-bai36.txt!");
        return 1;
    }

    //Dua ket qua ra tep
    duaRa(fp,a,b,ab);

    //Dong tep output
    fclose(fp);

    printf("Da ghi ket qua vao tep output-bai36.txt");

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

//Ham doc toa do 2 diem tu tep
unsigned int docDiem(FILE *fp,Diem &a,Diem &b)
{
    char tenDiem;

    fscanf(fp,"%c%lf%lf",&tenDiem,&a.x,&a.y);
    fscanf(fp,"%c%lf%lf",&tenDiem,&b.x,&b.y);

    return 1;
}

//Ham tinh can bac hai
double canBacHai(double x)
{
    double y;

    if(x==0) return 0;

    y=x;

    for(int i=1;i<=20;i++)
    {
        y=(y+x/y)/2;
    }

    return y;
}

//Ham dua ket qua ra tep
unsigned int duaRa(FILE *fp,Diem a,Diem b,double ab)
{
    fprintf(fp,"A(%g; %g)\n",a.x,a.y);
    fprintf(fp,"B(%g; %g)\n",b.x,b.y);
    fprintf(fp,"AB = %0.2f",ab);

    return 1;
}