#include <stdio.h>

void inMang(int arr[] , int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
	int arr[] = {5, 4, 2, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Cac phan tu trong mang: ");
    inMang(arr, n);

    return 0;
}
