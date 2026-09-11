//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: Nhập vào tháng và năm dương lịch. Đưa ra số ngày của tháng trong năm đó.Biết rằng tháng 2 của năm nhuận có 29 ngày, năm không nhuận có 28 ngày(năm nhuận là năm chia hết cho 4 và (không chia hết cho 100 hoặc chia hết cho 400)).Tính số ngày của tháng trong năm.
#include<stdio.h>
#include <iostream>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khởi tạo
    int thang,nam;
    printf("\n\n=== Chương trình tính số ngày trong tháng ===\n\n");
    printf("Nhập tháng bạn muốn biết: ");
    scanf("%d", &thang);
    printf("Nhập năm của tháng bạn muốn biết: ");
    scanf("%d", &nam);
    
    //Kiểm tra
    if (thang > 0 || thang <= 12){
	switch (thang) {
	    //Tháng 31 ngày!
	    case 1:
		
	    case 3:
		
	    case 5:
		
	    case 7:
		
	    case 8:
		
	    case 10:
		
	    case 12:
		printf("\n\nTháng này vào năm %d có 31 ngày\n", nam);
	    break;
	    
	    //Tháng 30 ngày!
	    case 4:
	    case 6:
	    case 9:
	    case 11:
		printf("\n\nTháng này vào năm %d có 30 ngày\n", nam);
	    break;
	    
	    //Tháng nhuận!
	    case 2:
		//Năm nhuận sẽ chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100
		if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
		    printf("\n\nTháng 2 năm %d có 29 ngày\n", nam);
		}
		else {
		    printf("\n\nTháng 2 năm %d có 28 ngày\n", nam);
		}
		break;
	}
    }
    else {
	printf("\n\n!=== Tháng Không Hợp Lệ ===!\n");
	printf("Đóng chương trình!");
    }
    
    cout<<endl;
    return 0;
}