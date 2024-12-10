#include<stdio.h>
int nguyenTo(int n){
	if(n<=1){
		return 0;
	}
	for(int i=2; i<n; i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int x, y;
	printf("Ban hay nhap so nguyen thu nhat: ");
	scanf("%d", &x);
	printf("Ban hay nhap so nguyen thu hai: ");
	scanf("%d", &y);
	
	if(nguyenTo(x)){
		printf("%d la so nguyen to\n", x);
	}else{
		printf("%d khong phai la so nguyen to\n", x);
	}
	
	if(nguyenTo(y)){
		printf("%d la so nguyen to\n", y);
	}else{
		printf("%d khong phai la so nguyen to\n", y);
	}
	
	return 0;
}
