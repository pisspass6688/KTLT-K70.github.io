//HọTên: Nguyễn Phụ Mạnh
//MãSV: 7060323
//Lớp: K70CNTTA
//Đề: 31
/*
Bai 31(ktltbai31.cpp): Tinh tong hai ma tran nguyen co kich thuoc mxn,
Cmxn = Amxn + Bmxn.
Ma tran A va B doc vao tu tep van ban "matranAB.txt".
Y/c viet ham:
(1) Ham doc vao tu tep 2 ma tran A va B.
(2) Ham nhan vao hai ma tran qua doi so va tra ve ma tran tong.
(3) Ham dua ma tran ra man hinh theo dinh dang hang, cot.
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//Khai bao ham
unsigned int docMaTran(FILE *fp,int **a,int **b,int m,int n);
int** tongMaTran(int **a,int **b,int m,int n);
unsigned int duaRa(int **a,int m,int n);

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int m,n,**a,**b,**c;
    FILE *fp;

    //Mo tep
    fp=fopen("matranAB.txt","rt");
    if(fp==NULL)
    {
        printf("Khong mo duoc tep matranAB.txt!");
        return 1;
    }

    //Doc kich thuoc ma tran
    fscanf(fp,"%d%d",&m,&n);

    //Cap phat dong ma tran A
    a=(int**)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++)
    {
        a[i]=(int*)calloc(n,sizeof(int));
    }

    //Cap phat dong ma tran B
    b=(int**)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++)
    {
        b[i]=(int*)calloc(n,sizeof(int));
    }

    //Doc hai ma tran tu tep
    docMaTran(fp,a,b,m,n);

    //Dong tep
    fclose(fp);

    //Tinh ma tran tong
    c=tongMaTran(a,b,m,n);

    //Dua ma tran A ra man hinh
    printf("Ma tran A:\n");
    duaRa(a,m,n);

    //Dua ma tran B ra man hinh
    printf("\nMa tran B:\n");
    duaRa(b,m,n);

    //Dua ma tran C ra man hinh
    printf("\nMa tran C = A + B:\n");
    duaRa(c,m,n);

    //Huy cac ma tran dong
    for(int i=0;i<m;i++)
    {
        free(a[i]);
        free(b[i]);
        free(c[i]);
    }

    free(a);
    free(b);
    free(c);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===

//Ham doc vao tu tep 2 ma tran A va B
unsigned int docMaTran(FILE *fp,int **a,int **b,int m,int n)
{
    //Doc ma tran A
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            fscanf(fp,"%d",&a[i][j]);
        }
    }

    //Doc ma tran B
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            fscanf(fp,"%d",&b[i][j]);
        }
    }

    return 1;
}

//Ham tinh tong hai ma tran
int** tongMaTran(int **a,int **b,int m,int n)
{
    int **c;

    //Cap phat dong ma tran C
    c=(int**)calloc(m,sizeof(int*));

    for(int i=0;i<m;i++)
    {
        c[i]=(int*)calloc(n,sizeof(int));
    }

    //Tinh C = A + B
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    //Tra ve ma tran C
    return c;
}

//Ham dua ma tran ra man hinh
unsigned int duaRa(int **a,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%6d",a[i][j]);
        }

        printf("\n");
    }

    return 1;
}