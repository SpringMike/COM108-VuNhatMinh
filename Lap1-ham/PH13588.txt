#include <stdio.h>

void chucNangCong(int a, int b, int c)
{
    printf("%d + %d + %d = %d \n", a, b, c, a + b + c);
}
void chucNangTru(int a, int b, int c)
{
    printf("%d - %d - %d = %d \n", a, b, c, a - b - c);
}
void chucNangNhan(int a, int b, int c)
{
    printf("%d * %d * %d = %d \n", a, b, c, a * b * c);
}
void chucNangChia(int a, int b, int c)
{
    printf("%d / %d / %d = %d \n", a, b, c, a / b / c);
}

void menu()
{
    printf("1 . phep cong \n");
    printf("2 . phep tru \n");
    printf("3 . phep nhan \n");
    printf("4 . phep chia \n");
    printf("an so khac de exit ! \n");
}

int main()
{
    int choice;
    int a, b, c;
    do
    {
        menu();
        printf("moi ban nhap lua chon : \n");
        int reads = scanf("%d", &choice);

        while (reads != 1)
        {
            printf("ban da nhap sai kieu ky tu!\nMoi ban nhap lai\n");
            getchar();
            reads = scanf("%f", &choice);
        }
        if (choice <= 0 || choice > 4)
        {
            printf("exit !");
            break;
        }
        printf("Moi ban nhap so 1: ");
        scanf("%d", &a);
        printf("Moi ban nhap so 2: ");
        scanf("%d", &b);
        printf("Moi ban nhap so 3: ");
        scanf("%d", &c);

        switch (choice)
        {
        case 1:
            chucNangCong(a, b, c);
            break;
        case 2:
            chucNangTru(a, b, c);
            break;
        case 3:
            chucNangNhan(a, b, c);
            break;
        case 4:
            chucNangChia(a, b, c);
            break;
        default:
            break;
        }
    } while (1);
}