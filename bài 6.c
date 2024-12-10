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
	int x, y;
	printf("Ban hay nhap so nguyen thu nhat: ");
	scanf("%d", &x);
	printf("Ban hay nhap so nguyen thu hai: ");
	scanf("%d", &y);
	
	if(soHoanHao(x)){
		printf("%d la so hoan hao\n", x);
	}else{
		printf("%d khong phai la so hoan hao\n", x);
	}
	
	if(soHoanHao(y)){
		printf("%d la so hoan hao\n", y);
	}else{
		printf("%d khong phai la so hoan hao\n", y);
	}
	
	return 0;
}
