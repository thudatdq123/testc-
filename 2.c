#include <stdio.h>
 
const int MAX = 100;
 
 
void NhapMang(int a[], int n){
	int i = 0;
    for( i ;i < n; i++){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
	int i = 0;
    for(i ;i < n; ++i){
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}
 

int main(){
    int arr[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > MAX);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======XUAT MANG=====\n");
    XuatMang(arr, n);
}
