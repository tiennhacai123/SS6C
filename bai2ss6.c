#include <stdio.h>
#include <stdlib.h> 
int main(){
	int number1, number2, a, b;
	printf("nhap cac so:");
	scanf("%d %d", &number1,&number2); 
	do{
		printf("1.Tong 2 so\n");
		printf("2.Hieu 2 so\n");
		printf("3.Tich 2 so\n");
		printf("4.Thuong 2 so\n");
		printf("5.So du trong phep chia 2 so\n");
		printf("6.Uoc chung lon nhat\n");
		printf("7.Bai chung nho nhat\n");
		printf("8.Thoai\n"); 
		int choise;
		printf("Nhap lua chon:"); 
		scanf("%d", &choise);
		switch(choise){
			case 1:
				printf("tong 2 so la: %d\n", number1 + number2);
				break;
			case 2:
				printf("hieu 2 so: %d\n", number1 - number2);
				break;
			case 3:
				printf("tich 2 so: %d\n", number1 * number2);
				break;
			case 4:
				printf("thuong 2 so: %d\n", number1/number2);
				break;
			case 5:
				printf("so du trong phep chia 2 so: %d\n", number1 % number2);
				break;
			case 6:
				while(number1!=number2){
					if(number1<number2){
						number2-=number1; 
					}else{
						number1-=number2;
					} 
				} 
				printf("uoc chung lon nhat: %d\n", number1);
				break;
			case 7:
				a=number1,b=number2; 
				while(number1!=number2){
					if(number1<number2){
						number2-=number1; 
					}else{
						number1-=number2;
					} 
				} 
				printf("boi chung nho nhat: %d\n", (a*b)/number1);
				break;
			case 8:
				exit(0); 
			default:
				printf("Vui long chon tu 1 den 8\n"); 
		}
	}while("Vui long chon tu 1 den 8\n"); 
} 