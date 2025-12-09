#include<stdio.h>
int main(){
	int n;
	printf("hay nhap so phan tu mang: ");
	scanf("%d",&n);
	int mang[n];
	
	for(int i=0;i<n;i++){
		printf("hay nhap so gia tri phan tu mang[%d] = ",i);
		scanf("%d",&mang[i]); 
	}
	int min = mang[0];
	int max = mang[0];
	for(int i=0;i<n;i++){
		if(mang[i]<min){
			min = mang[i]; 
		}
	}
	for(int i=0;i<n;i++){
		if(mang[i]>max){
			max = mang[i]; 
		} 
	}
	printf("gia tri min trong mang[%d] la: %d\n",n,min);
	printf("gia tri max trong mang[%d] la: %d\n",n,max);
} 
