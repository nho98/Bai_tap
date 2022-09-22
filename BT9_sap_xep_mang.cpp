/*
    sap xep mang theo thu tu tang-giam
    pp: co dien, can cai thien
    y tuong: malloc
*/
#include <stdio.h>

#define MAX 50

void nhap_mang(int mang[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &mang[i]);
    }
}

void sx_tang(int mang[], int n)
{
    int tmp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(mang[i] > mang[j])
            {
                tmp = mang[i];
                mang[i] = mang[j];
                mang[j] = tmp;
            }
        }
    }
}

void sx_giam(int mang[], int n)
{
    int tmp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(mang[i] < mang[j])
            {
                tmp = mang[i];
                mang[i] = mang[j];
                mang[j] = tmp;
            }
        }
    }
}

void xuat_mang(int mang[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%4d", mang[i]);
    }
    printf("\n");
}

int main()
{
    int mang[MAX];
    int n;
    printf("Nhap n (1<n<%d): ", MAX);
    do
    {
        scanf("%d", &n);
        if((n<2)|(n>MAX))
        {
            printf("Nhap lai: ");
        }
    }
    while((n<2)|(n>MAX));

    nhap_mang(mang, n);
    sx_tang(mang, n);
    xuat_mang(mang, n);
    sx_giam(mang, n);
    xuat_mang(mang, n);
}