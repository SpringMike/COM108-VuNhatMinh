#include <stdio.h>

int main()
{
    float gpa;
    int flaged = 0;
    int choice;
    int num1, num2, num3, num4;
    long numberCheck;
    do
    {
        printf("------------------------------------------------------\n");
        printf("1. Xep luc hoc luc theo thang diem tu 1 den 5\n");
        printf("2. Cong 4 so lai voi nhau\n");
        printf("3. Kiem tra so vao la so chan hay so le\n");
        printf("4. Kiem tra so vao la so duong hay so am\n");
        printf("5. Kiem tra diem thi de biet co hoc lai hay khong\n");
        printf("------------------------------------------------------\n");
        printf("press anything to exit !\n");
        printf("Ban chon lam gi ?\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("nhap gpa : ");
            scanf("%f", &gpa);
            while (gpa <= 0 || gpa > 5)
            {
                printf("khong hop le, nhap lai diem: \n");
                scanf("%f", &gpa);
            }
            if (gpa < 3)
            {
                printf("diem GPA: %f la hoc luc Yeu !\n", gpa);
            }
            else if (gpa < 5)
            {
                printf("diem GPA: %f la hoc luc Kha !\n", gpa);
            }
            else
            {
                printf("diem GPA: %f la hoc luc Gioi !\n", gpa);
            }
            break;
        case 2:

            printf("Moi nhap so thu nhat : ");
            scanf("%d", &num1);
            printf("Moi nhap so thu hai : ");
            scanf("%d", &num2);
            printf("Moi nhap so thu ba : ");
            scanf("%d", &num3);
            printf("Moi nhap so thu tu : ");
            scanf("%d", &num4);
            printf("Tong cua 4 so do la: %d \n", num1 + num2 + num3 + num4);
            break;
        case 3:
            printf("Nhap so can check: ");
            scanf("%ld", &numberCheck);
            while (numberCheck <= 0)
            {
                printf("khong hop le, nhap lai: \n");
                scanf("%ld", &numberCheck);
            }
            if (numberCheck % 2 == 0)
            {
                printf("%ld la so chan\n", numberCheck);
            }
            else
            {
                printf("%ld la so le\n", numberCheck);
            }
            break;
        case 4:
            printf("Nhap so can check: ");
            scanf("%ld", &numberCheck);
            if (numberCheck < 0)
            {
                printf("%ld la so nguyen am \n", numberCheck);
            }
            else if (numberCheck > 0)
            {
                printf("%ld la so nguyen duong\n", numberCheck);
            }
            else
            {
                printf("%ld ban vua nhap vao bang: ", numberCheck);
            }
            break;
        case 5:
            printf("nhap gpa : ");
            scanf("%f", &gpa);
            while (gpa <= 0 || gpa >= 10)
            {
                printf("khong hop le, nhap lai diem: \n");
                scanf("%f", &gpa);
            }
            if (gpa < 5)
            {
                printf("Chuc mung ban bi hoc lai \n!");
            }
            else
            {
                printf("Chuc mung ban da qua mon !\n");
            }

            break;
        default:
            flaged = 1;
            printf("exit !");
            break;
        }
    } while (flaged == 0);
}
