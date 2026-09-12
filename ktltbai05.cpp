//HoTen:Nguyễn Phụ Mạnh
//MaSV: 7060323
//Lop: K70CNTTA
//De: 05
/*
Bài 05(ktltbai05.cpp): Viết chương trình tạo menu sau:
	TÍNH DIỆN TÍCH VÀ CHU VI CÁC HÌNH

    1. Tính diện tích và chu vi hình tam giác biết 3 cạnh
	2. Tính diện tích và chu vi hình tròn biết bán kính
	3. Tính diện tích và chu vi hình chữ nhật biết 2 cạnh
	4. Kết thúc chương trình

	Chọn hình để tính(1/2/3/4):

    Khi người sử dụng chọn 1 hoặc 2 hoặc 3 thì chương trình phải lấy vào dữ liệu,
    tính diện tích và chu vi hình tương ứng, đưa kết quả ra màn hình.
    Khi đưa kết quả ra màn hình phải dừng lại để người sử dụng xem, chờ cho đến khi người sử dụng
    ấn phím bất kỳ thì quay trở lại menu. Khi người sử dụng chọn 4 thì kết thúc chương trình.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int chon, zero;

    do
    {
        // Menu chương trình
        printf("\n\n============================================\n");
        printf("       Tính Diện Tích và Chu Vi Các Hình\n");
        printf("============================================\n");
        printf("1. Tính Diện Tích và Chu Vi hình tam giác.\n");
        printf("2. Tính Diện Tích và Chu Vi hình tròn.\n");
        printf("3. Tính Diện Tích và Chu Vi hình chữ nhật.\n");
        printf("4. Kết thúc chương trình.\n");
        printf("============================================\n\n");
        printf("Chọn hình để tính (1/2/3/4): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
        {
            // Khởi tạo biến
            float a, b, c, cv, ncv, dt;

            // Giao diện người dùng tương tác với máy
            printf("\n\n=== Chương trình tính chu vi và diện tích tam giác ===\n");
            printf("Vui lòng cung cấp dữ liệu 3 cạnh tam giác (cm)\n\n");
            printf("||  Cạnh thứ nhất = ");
            scanf("%f", &a);
            printf("||  Cạnh thứ hai = ");
            scanf("%f", &b);
            printf("||  Cạnh thứ ba = ");
            scanf("%f", &c);

            // Kiểm tra trước khi tính toán
            // Hình tam giác có tổng của hai cạnh lớn hơn cạnh còn lại
            if (a + b > c && a + c > b && b + c > a)
            {
                // Đoạn tính toán
                cv = a + b + c;
                ncv = cv / 2;
                dt = sqrt(ncv * (ncv - a) * (ncv - b) * (ncv - c));

                // Đoạn xuất kết quả
                printf("\nChu vi tam giác = %0.1f\n", cv);
                printf("Diện tích tam giác = %0.1f\n\n", dt);
            }
            else
            {
                printf("\n\nĐây không phải hình tam giác!\n");
                printf("=== Đóng Chương Trình ===\n\n");
            }

			//Nhập 0 để trở về menu
			do
			{
			    printf("Nhập 0 để quay lại menu: ");
			    scanf("%d", &zero);
			} 
			while (zero != 0);
            break;
        }

        case 2:
        {
            // Khai báo biến
            float r, dt, cv;

            // Đoạn nhập dữ liệu
            printf("Chương trình tính diện tích và chu vi hình tròn có bán kính r");
            printf("\n\nNhập vào bán kính hình tròn: ");
            scanf("%f", &r);

            // Đoạn tính toán
            dt = 3.1415 * r * r;
            cv = 2 * 3.1415 * r;

            // Đoạn xuất kết quả
            printf("Diện tích hình tròn là: %0.1f", dt);
            printf("\nChu vi hình tròn là: %0.1f", cv);

			//Nhập 0 để trở về menu
			do
			{
			    printf("Nhập 0 để quay lại menu: ");
			    scanf("%d", &zero);
			} 
			while (zero != 0);
            break;
        }

        case 3:
        {
            // Khai báo biến
            float dai, rong, chuvi, dientich;

            // Đoạn nhập dữ liệu
            printf("\nNhập chiều dài: ");
            scanf("%f", &dai);
            printf("Nhập chiều rộng: ");
            scanf("%f", &rong);

            // Đoạn tính toán
            chuvi = 2 * (dai + rong);
            dientich = dai * rong;

            // Đoạn xuất kết quả
            printf("\nChu vi hình chữ nhật = %.2f", chuvi);
            printf("\nDiện tích hình chữ nhật = %.2f", dientich);

			//Nhập 0 để trở về menu
			do
			{
			    printf("Nhập 0 để quay lại menu: ");
			    scanf("%d", &zero);
			} 
			while (zero != 0);
            break;
        }

        case 4:
            // Kết thúc chương trình
            printf("\nKết thúc chương trình!!");
            break;

        default:
            // Thông báo lựa chọn không hợp lệ
            printf("\nLựa chọn không hợp lệ!\n");
            printf("Ấn tổ hợp Ctrl C để dừng lại!!!");
        }

    } while (chon != 4);

    return 0;
}