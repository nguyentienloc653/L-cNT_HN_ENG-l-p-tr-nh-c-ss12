#include<stdio.h>
void inRaCacPhanTuTrongMang(int arr[], int size){
	for(int i=0; i<size; i++){
		printf("Phan tu thu %d la %d\n", i+1, arr[i]);
	}
}
int main(){
	int number[]={1,2,3,4,5,6,7,8,9};
	int size= sizeof(number)/sizeof(int);
	inRaCacPhanTuTrongMang(number,size);
	
	return 0;
}
