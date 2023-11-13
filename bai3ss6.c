#include <stdio.h>
#include <stdlib.h> 
int main(){
	int a, b, c,max,min;
	printf("nhap cac so:");
	scanf("%d %d %d", &a, &b, &c);
	do{
		printf("1.Tong 3 so nguyen\n");
		printf("2.Trung binh cong cua 3 so nguyen\n");
		printf("3.So lon nhat, so nho nhat trong 3 so\n");
		printf("4.Thoat\n"); 
		int choise;
		printf("Nhap lua chon:"); 
		scanf("%d", &choise);
		switch(choise){
			case 1:
				printf("Tong 3 so nguyen la: %d\n", a+b+c);
				break;
			case 2:
				printf("trung binh cong cua 3 so nguyen la: %d\n", (a+b+c)/3);
			case 3:
				max=(((a>b)?a:b)>c)?((a>b)?a:b):c;
				min=(((a<b)?a:b)<c)?((a<b)?a:b):c;
				printf("So lon nhat, so nho nhat trong 3 so la: %d va %d\n", max, min);
			case 4:
				exit(0); 
			default:
				printf("Vui long chon tu 1 den 8\n"); 
		} 	 
	}while("Vui long nhap tu 1 den 4");
}