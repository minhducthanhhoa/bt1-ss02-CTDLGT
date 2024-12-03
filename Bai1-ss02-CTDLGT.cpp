#include<stdio.h>

int main(){
	int n;
	
	// nhap so phan tu cua mang
	do{
		printf("Nhap sp phan tu cua mang: ");
		scanf("%d", &n);
	} while (n <= 0 || n > 100);
	
	int arr[n];
	// nhap cac phan tu cua mang
	printf("Nhap %d phan tu cua mang: \n", n);
	for(int i = 0; i < n; i++){
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	// Tim gia tri lon nhat
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	// In ra gia tri lon nhat
	printf("Gia tri lon nhat trong mang la: %d\n", max);	
	return 0;
}

