#include <stdio.h>

// void bai1()
// {
//     int temp;
//     printf("nhap so");
//     scanf("%d", &temp);
//     if (temp % 2 == 0)
//     {
//         printf("%d la so chan", temp);
//     }
//     else
//     {
//         printf("%d la so le", temp);
//     }
// }

// void bai2()
// {

//     int temp;
//     printf("nhap so: \n");
//     scanf("%d", &temp);
//     if (temp > 0)
//     {
//         printf("%d la so duong", temp);
//     }
//     else if (temp < 0)
//     {
//         printf("%d la so am", temp);
//     }

//     else
//     {
//         printf("%d la so 0", temp);
//     }
// }

// void bai3()
// {
//     int buoiNghi;
//     float diemThi, diemTK, diemOnline;
//     printf("nhap so buoi nghi: ");
//     scanf("%d", &buoiNghi);
//     printf("nhap diem thi\ndiem tong ket\ndiem online: ");
//     scanf("%f%f%f", &diemThi, &diemTK, &diemOnline);
//     if (buoiNghi <= 3 && diemThi >= 5 && diemTK >= 5 && diemOnline >= 7.5)
//     {
//         printf("chuc mung ban qua mon");
//     }
//     else
//     {
//         printf("truot");
//     }
// }

// int main()
// {
//     // bai1();
//     // bai2();
//     bai3();
// }

void bai1()
{
    float diem;

    int choice;
    scanf("%d", &choice);
    int flaged = 0;
    int choice;
    do
    {
        printf("1. Xep hang mon");
        printf("2. Chuong trinh cong 3 so");
        printf("3. Chuong trinh cong 4 so");
        printf("4. Chuong trinh tru 5 so");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("nhap diem cua ban: ");
            scanf("%f", &diem);
            if (diem < 5)
            {
                printf("Hoc lai");
            }
            else if (diem < 8 && diem > 5)
            {
                printf("kha");
            }
            else
            {
                printf("Gioi");
            }

            break;
        case 2:
            int x, y;
            printf("nhap 2 so: ");
            scanf(% d % d, &x, &y);
            printf("%d + %d = ", x, y, x + y);
        default:
            flaged = 1;
            break;
        }

    } while (flaged = 0);
}

int main()
{
    bai1();
}