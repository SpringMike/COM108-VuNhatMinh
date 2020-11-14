#include <stdio.h>

void bai1()
{
    int temp;
    printf("nhap so");
    scanf("%d", &temp);
    if (temp % 2 == 0)
    {
        printf("%d la so chan", temp);
    }
    else
    {
        printf("%d la so le", temp);
    }
}

void bai2()
{

    int temp;
    printf("nhap so: \n");
    scanf("%d", &temp);
    if (temp > 0)
    {
        printf("%d la so duong", temp);
    }
    else if (temp < 0)
    {
        printf("%d la so am", temp);
    }

    else
    {
        printf("%d la so 0", temp);
    }
}

void bai3()
{
    int buoiNghi;
    float diemThi, diemTK, diemOnline;
    printf("nhap so buoi nghi: ");
    scanf("%d", &buoiNghi);
    printf("nhap diem thi\ndiem tong ket\ndiem online: ");
    scanf("%f%f%f", &diemThi, &diemTK, &diemOnline);
    if (buoiNghi <= 3 && diemThi >= 5 && diemTK >= 5 && diemOnline >= 7.5)
    {
        printf("chuc mung ban qua mon");
    }
    else
    {
        printf("truot");
    }
}

int main()
{
    // bai1();
    // bai2();
    bai3();
}