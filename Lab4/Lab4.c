#include<stdio.h>
void bai1(){
	 	printf("1.Tinh trung binh tong cua cac so tu nhien chia het cho 2\n");
	 	int min, max;
	printf("Hay nhap so min: \n");
	scanf("%d",&min);
	printf("Hay nhap so max: \n");
	scanf("%d",&max);
	printf("=======================================================\n");
	float tong, count;
	tong = count = 0;
	int i = min;
	while (i<=max){
		if(i%2==0)
		{
			tong +=i; //tong = tong + i
			printf("%d\n",&tong);
			count++;
			//printf("%d\n",&tong);
		}
		i++;
	}
	int trungBinh = tong/count;
	printf("Trung binh so tu nhien tu min den max la: %d \n",trungBinh);
}
 void bai2(){
	 	printf("2.Xay dung chuong trinh xac dinh so nguyen to \n");
	 		int x;
	printf("Hay nhap so vao: \n");
	scanf("%d",&x);
	int dem = 0;
	for(int i = 2; i<x;i++){
		if(x%i==0)
		{
			dem++;
			
		}
	}
	if(dem==0){
		printf("Day la so nguyen \n");
	}
	else{
		printf("Day khong phai la so nguyen to \n");
	}	
 } 
 void bai3(){
 	    printf("3.Xay dung chuong trinh so chinh phuong\n");
 	    int x;
	printf("Hay nhap so vao ban phim: \n");
	scanf("%d",&x);
	int dem = 0;
	for(int i = 1;i<x;i++){
		if(i*i == x){
			dem++;
			break;
		}
	}
	if(dem==0){
		printf("Khong phai la so chinh phuong \n");
	}
	else{
		printf("Day la so chinh phuong \n");
	}
 } 
int main()
{
	int chon;
	do
	{
	    printf("====================MENU====================\n");
 	    printf("1.Tinh trung binh tong cua cac so tu nhien chia het cho 2\n");
 	    printf("2.Xay dung chuong trinh xac dinh so nguyen to \n");
 	    printf("3.Xay dung chuong trinh so chinh phuong\n");
 	    printf("4.Thoat\n");
 	    printf("Hay chon cac chuc nang: \n");
 	    scanf("%d",&chon);
 	    switch (chon){
 	    	case 1: 
		     bai1();
		    break;
		    case 2: 
		     bai2();
		    break;
		    case 3: 
		     bai3();
		    break;
		    case 4:
		    break; 
		    default:
			printf("Ban nhap sai chuc nang, xin nhap lai\n");
		    break;
		}
	}while (chon != 4);
	return 0;
}
