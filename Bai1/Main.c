#include <stdio.h>
void bai1()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        printf("nhap nam sinh: ");
        scanf("%d", &a[i]);
    }
    int n = 1;
    for (int i = 0; i < 3; i++)

    {
        printf("sinh vien %d : %d \n", n, a[i]);
        n++;
    }
}

void bai2()
{
    float a;
    scanf("%f", &a);

    printf("diem c cua ban la: %f ", a);
}
void bai3()
{
    char c = 'a';
    printf("% c", c);
}
int main()
{
    bai1();
    bai2();
    bai3();
}