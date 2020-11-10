#include <stdio.h>

void bai1()
{
    float diem;
    int flaged = 0;
    int choice;
    int a;
    int b;
    do
    {
        printf("1. Xep hang mon\n");
        printf("2. Chuong trinh cong 3 so\n");
        printf("3. Chuong trinh nhan 4 so\n");
        printf("4. Chuong trinh tru 5 so\n");
        printf("nhap so khac de thoat\n");
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

            printf("nhap 2 so: ");
            scanf("%d%d", &a, &b);
            printf("%d + %d = %d ", a, b, a + b);
            break;
        case 3:
            printf("nhap 2 so: ");
            scanf("%d%d", &a, &b);
            printf("%d * %d = %d ", a, b, a * b);
            break;
        case 4:
            printf("nhap 2 so: ");
            scanf("%d%d", &a, &b);
            printf("%d - %d = %d ", a, b, a - b);
            break;
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