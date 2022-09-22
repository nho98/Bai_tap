/* 
km dau tien 5k/km
30 km tiep theo 4k/km
> 30km thi 3k/km
nhap ?km in ra tien
*/
#include <stdio.h>

int main()
{
    int km = 0;
    int tien = 0;
    printf("Nhap so km da di chuyen: ");
    scanf("%d", &km);
    if(km==1)
    {
        tien = 5;
    }
    else if(km<=31)
    {
        km = km - 1;
        tien = 5 + 4*km;
    }
    else
    {
        km = km - 31;
        tien = 125 + 3*km;
    }
    printf("Tong tien thanh toan: %dk", tien);
}