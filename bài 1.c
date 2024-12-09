#include<stdio.h>
int tinhTong(int a, int b){
	printf("Tong hai so %d va %d la %d", a, b, a+b);
	return a+b;
}
int main(){
	tinhTong(5,5);
	return 0;
}
