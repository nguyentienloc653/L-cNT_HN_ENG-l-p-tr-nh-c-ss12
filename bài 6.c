#include<stdio.h>
int soHoanHao(int n){
	int sum=0;
	for(int i=1; i<n; i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum==n;
}
int main(){
	int number1, number2;
	printf("Ban hay nhap so nguyen thu nhat: ");
	scanf("%d", &number1);
	printf("Ban hay nhap so nguyen thu hai: ");
	scanf("%d", &number2);
	
	if(soHoanHao(number1)){
		printf("%d la so hoan hao\n", number1);
	}else{
		printf("%d khong phai la so hoan hao\n", number1);
	}
	
	if(soHoanHao(number2)){
		printf("%d la so hoan hao\n", number2);
	}else{
		printf("%d KHONG phai la so hoan hao\n", number2);
	}
	
	return 0;
}
