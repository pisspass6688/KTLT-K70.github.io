//HọTên: Nguyễn Phụ Mạnh
//MãSV: 7060323
//Lớp: K70CNTTA
//Đề: 26
/*
Bai 26(ktltbai26.cpp): Cho tep van ban "daysonguyen.txt" chua day so nguyen co n phan tu.
Doc day so nguyen tu tep vao mang dong. Sap xep day so tang dan.
Viet ham sap xep day so, ham hoan doi va ham dua day so ra man hinh.
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//Khai bao ham
unsigned int hoanDoi(int &a,int &b);
unsigned int sapXep(int *a,int n);
unsigned int duaRa(int *a,int n);

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int n;
    int *a;
    FILE *fp;

    //Mo tep de doc
    fp=fopen("daysonguyen.txt","rt");
    if(fp==NULL)
    {
        printf("Khong mo duoc tep daysonguyen.txt!");
        return 1;
    }

    //Doc so phan tu cua day
    fscanf(fp,"%d",&n);

    //Tao mang dong
    a=(int*)calloc(n,sizeof(int));

    //Doc day so nguyen tu tep
    for(int i=0;i<n;i++)
    {
        fscanf(fp,"%d",&a[i]);
    }

    //Dong tep
    fclose(fp);

    //Dua day so ra man hinh
    printf("Day so nguyen doc tu tep la:\n");
    duaRa(a,n);

    //Sap xep day so tang dan
    sapXep(a,n);

    //Dua day so sau khi sap xep ra man hinh
    printf("\n\nDay so sau khi sap xep tang dan la:\n");
    duaRa(a,n);

    //Huy mang dong
    free(a);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

//Ham hoan doi noi dung 2 o nho
unsigned int hoanDoi(int &a,int &b)
{
    int tg=a;
    a=b;
    b=tg;
    return 1;
}

//Ham sap xep day so tang dan
unsigned int sapXep(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                hoanDoi(a[i],a[j]);
            }
        }
    }
    return 1;
}

//Ham dua day so ra man hinh
unsigned int duaRa(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 1;
}