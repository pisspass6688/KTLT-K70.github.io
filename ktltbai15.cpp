//HọTên: Nguyễn Phụ Mạnh
//MãSV: 7060323
//Lớp: K70CNTTA
//Đề: 15
/*
Bài 15(ktltbai15.cpp): Nhập vào một danh sách n tên (chỉ tên, không họ đệm).
Sắp xếp danh sách tên theo vần ABC.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//===chương trình chính===
int main()
{
    //Khai báo biến
    int n,i,j;
    char a[100][30],tg[30];

    //Giao diện nhập vào số lượng tên
    printf("Chương trình sắp xếp danh sách tên theo vần ABC");
    printf("\n\nNhập vào số lượng tên: ");
    scanf("%d",&n);

    //Kiểm tra số lượng tên
    if(n<1 || n>100)
    {
        printf("\nSố lượng tên không hợp lệ!");
        printf("\nSố lượng tên phải từ 1 đến 100.");

        cout<<endl;
        return 0;
    }

    //Nhập vào danh sách tên
    printf("\nNhập vào danh sách tên:\n");
    for(i=0;i<n;i++)
    {
        printf("Tên thứ %d: ",i+1);
        scanf("%29s",a[i]);
    }

    //Sắp xếp danh sách tên theo vần ABC
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmp(a[i],a[j])>0)
            {
                //Đổi chỗ hai xâu
                strcpy(tg,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],tg);
            }

    //Đưa ra danh sách tên sau khi sắp xếp
    printf("\nDanh sách tên sau khi sắp xếp theo vần ABC:\n");
    for(i=0;i<n;i++)
        printf("%d. %s\n",i+1,a[i]);

    cout<<endl;
    return 0;
}
//===định nghĩa hàm===

