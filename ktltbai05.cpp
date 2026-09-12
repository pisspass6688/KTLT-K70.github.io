#include <stdio.h>
#include <math.h>

int main()
{
    int chon, zero;

    do
    {
	//Menu chương trình
        printf("\n\n============================================\n");
        printf("       Tính Diện Tích và Chu Vi Các Hình\n");
        printf("============================================\n");
        printf("1. Tính Diện Tích và Chu Vi hình tam giác.\n");
        printf("2. Tính Diện Tích và Chu Vi hình tròn.\n");
        printf("3. Tính Diện Tích và Chu Vi hình chữ nhật\n");
        printf("4. Kết thúc chương trình\n");
        printf("============================================\n\n");
        printf("Chọn hình để tính (1/2/3/4): ");
        scanf("%d", &chon);

        switch (chon)
        {
	    case 1:
    	    {
        	float a, b, c, chuvi, p, dientich;

        	printf("\nNhap cạnh a: ");
        	scanf("%f", &a);
        	printf("Nhap canh b: ");
        	scanf("%f", &b);
        	printf("Nhap canh c: ");
        	scanf("%f", &c);

        	chuvi = a + b + c;
        	p = chuvi / 2;
        	dientich = sqrt(p * (p - a) * (p - b) * (p - c));

        	printf("\nChu vi tam giac = %.2f", chuvi);
        	printf("\nDien tich tam giac = %.2f", dientich);;

        	break;
	    }
    	    case 2:
    	    {
		//Khai bao bien
    		float r,dt,cv;
        
        	//Nhap ban kinh
                printf("Chuong trinh tinh dien tich va chu vi hinh tron co ban kinh r");
                printf("\n\nNhap vao ban kinh hinh tron: ");
                scanf("%f",&r);
                
                //Tinh dien tich va chu vi
                dt = 3.1415*r*r;
                cv = 2*3.1415*r;
                
        	//Dua ra dt va cv tinh duoc
                printf("Dien tich hinh tron la: %0.1f",dt);
                printf("\nChu vi hinh tron la: %0.1f",cv);
            
        	break;
    	    }
    	    case 3:
    	    {
        	float dai, rong, chuvi, dientich;

        	printf("\nNhap chieu dai: ");
        	scanf("%f", &dai);
        	printf("Nhap chieu rong: ");
        	scanf("%f", &rong);

        	chuvi = 2 * (dai + rong);
        	dientich = dai * rong;

        	printf("\nChu vi hình chữ nhất = %.2f", chuvi);
        	printf("\nDiện tích hình chữ nhật = %.2f", dientich);
        	break;
    	    }
    	    case 4:
        	printf("\nKết thúc chương trình!!");
        	break;
    	    default:
        	printf("\nLựa chọn không hợp lệ!\nẤn tổ hợp Ctrl C để dừng lại!!!");
        }

    } while (chon != 4);

    return 0;
}
