#include<stdio.h>
int main(){
	int n;
	printf("hay nhap phan tu mang: ");
	scanf("%d",&n);
	//nhap mang n
	int mang[n];
	for(int i=0;i<n;i++){
		printf("hay nhap gia tri phan tu mang thu %d:",i+1);
		scanf("%d",&mang[i]);
	}
	int tong = 0;
	int dem = 0;
	for(int i=0;i<n;i++){
		if(mang[i]%3==0){
			tong = tong + mang[i];
			dem++; 
		} 
	} 
	float tbtong=tong/dem;
	printf("trung binh tong cua cac so trong mang chia het cho 3 la: %.1f",tbtong);
} 
