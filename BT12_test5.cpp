/*
    tìm được số lần xuất hiện nhiều nhất (trùng nhau) của các phần tử khác nhau
	chưa in ra được vị trí của p.tử (truy xuất chưa đúng)
*/
#include <stdio.h>

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap i%d: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%5d", a[i]);
	}
}
//sắp xếp để dễ kiểm tra, ko có ý nghĩa
void sap_xep(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}

void pt_xh_nhieu(int a[],int n){
	sap_xep(a,n);
	printf("\nMAng sau khi sap xep la: ");
	xuat(a,n);
	int max=0;
	for(int i=0;i<n;i++){
		int dem=1;
		int b=i;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem++;
				b++;
			}
		}
		if(dem>max) max=dem;
		i=b;
	}
    printf("\nmax = %d", max);
	int d[100];
	int l=0;
	for(int i=0;i<n;i++){
		int dem2=1;
		int c=i;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem2++;
				c++;
			}
		}
		if(dem2==max){
			d[l]=a[i];
			l++;
		}
		i=c;
	}
	printf("\nPhan tu xuat hien nhieu nhat %d lan la: ", max);
	xuat(d,l);
	
}
int main(int* argc, char* argv) {
	int a[100];
	int n;
	printf("Nhap so pt cua mamg: ");
	scanf("%d", &n);
	
	nhap(a,n);
	printf("\nMang vua nhap la: ");
	xuat(a,n);
	
	pt_xh_nhieu(a,n);
	return 0;
}
