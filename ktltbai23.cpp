//HọTên: Nguyễn Phụ Mạnh
//MãSV: 7060323
//Lớp: K70CNTTA
//Đề: 23
/*
Bài 23(ktltbai23.cpp): Cho tệp văn bản "daysonguyen.txt"
chứa dãy số nguyên có n phần tử. Đọc dãy số nguyên từ tệp
vào mảng động. Xóa tất cả các phần tử của dãy số có giá
trị bằng x. Thay đổi kích thước mảng động bằng với số
phần tử còn lại của dãy số.
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//===chương trình chính===
int main()
{
    //Khai báo biến
    FILE *fp;
    int n,i,j,x;
    int *a,*b;

    //Mở tệp để đọc dữ liệu
    fp = fopen("daysonguyen.txt","rt");
    if(fp == NULL)
    {
        printf("Không mở được tệp daysonguyen.txt");

        //Kết thúc chương trình khi gặp lỗi mở tệp
        return 0;
    }

    //Đọc số phần tử của dãy từ tệp
    if(fscanf(fp,"%d",&n)!=1 || n<0)
    {
        printf("Dữ liệu trong tệp không hợp lệ.");
        fclose(fp);
        return 0;
    }

    //Cấp phát mảng động
    a = (int*)calloc(n,sizeof(int));
    if(n>0 && a==NULL)
    {
        printf("Không đủ bộ nhớ để cấp phát mảng.");
        fclose(fp);
        return 0;
    }

    //Đọc dãy số nguyên từ tệp vào mảng động
    for(i=0;i<n;i++)
    {
        if(fscanf(fp,"%d",&a[i])!=1)
        {
            printf("Dữ liệu trong tệp không đầy đủ.");
            free(a);
            fclose(fp);
            return 0;
        }
    }

    //Đóng tệp
    fclose(fp);

    //Nhập giá trị x cần xóa
    printf("Chương trình xóa các phần tử có giá trị bằng x");
    
    
    //Dua ra day so ban dau
    printf("Day so doc duoc tu tep la:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\n\nNhập vào giá trị x cần xóa: ");
    if(scanf("%d",&x)!=1)
    {
        printf("Giá trị x không hợp lệ.");
        free(a);
        return 0;
    }

    //Xóa các phần tử có giá trị bằng x
    j = 0;
    for(i=0;i<n;i++)
        if(a[i]!=x)
        {
            a[j] = a[i];
            j++;
        }

    //Thay đổi kích thước mảng động
    if(j==0)
        b = NULL;
    else
        b = (int*)calloc(j,sizeof(int));

    if(j>0 && b==NULL)
    {
        printf("Không đủ bộ nhớ để cấp phát lại mảng.");
        free(a);
        return 0;
    }
    
    //Sao chép các phần tử còn lại sang mảng mới
    for(i=0;i<j;i++)
        b[i] = a[i];

    //Giải phóng mảng cũ
    free(a);

    //Cập nhật mảng động
    a = b;
    n = j;

    //Đưa ra dãy số sau khi xóa
    printf("\nDãy số sau khi xóa các phần tử bằng %d:\n",x);
    for(i=0;i<n;i++)
        printf("%6d",a[i]);

    printf("\nSố phần tử còn lại: %d",n);

    //Giải phóng bộ nhớ mảng động
    free(a);

    cout<<endl;
    return 0;
}
//===định nghĩa hàm===

