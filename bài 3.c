#include<stdio.h>
int giaiThua(int n){
	int result=1;
	for(int i=1; i<=n; i++){
		result *= i;
	}
	return result;
}
int main(){
	int number;
	int result;
	printf("Ban hay nhap vao mot so nguyen: ");
	scanf("%d", &number);
	result=giaiThua(number);
	printf("Giai thua cua %d la %d", number, result);
	
	return 0;
}
