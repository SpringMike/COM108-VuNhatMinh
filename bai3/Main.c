#include <stdio.h>

void bai1()
{
    int a;
    scanf("%d", &a);
    while (a <= 0 || a >= 100)
    {
        printf("khong hop le\n");
        scanf("%d", &a);
    }
}
void bai3() //vong lap for
{
    int a;
    int mul;
    printf("Nhap so: ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        // mul = a * i;
        // printf("%d * %d = %d ; ", a, i, mul);
        for (int j = 1; j <= 10; j++)
        {
            mul = i * j;
            printf("%d * %d = %d ; ", i, j, mul);
            printf("\n");
        }
    }
}
void bai4()
{ //vong lap while
    int a;
    int mul;
    int count = 1;
    printf("nhap so: ");
    scanf("%d", &a);
    do
    {
        mul = a * count;
        printf("%d * %d = %d; \n", a, count, mul);
        count++;
    } while (count <= 10);
}

int main()
{
    bai4();
}