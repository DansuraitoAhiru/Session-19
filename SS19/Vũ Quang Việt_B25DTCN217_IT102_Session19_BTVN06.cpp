#include <stdio.h>
void copyArray(int *src, int *dest, int n){
	for(int i=0;i<n;i++){
		*(dest+i)=*(src+i);
	}
}

int main(){
	int size;
	printf("Nhap so phan tu: ");
	scanf("%d",&size);
	int arr1[size];
	int arr2[size];
	printf("Nhap phan tu mang goc: \n");
	for(int i=0;i<size;i++){
		printf("arr1[%d]: ",i);
		scanf("%d",&arr1[i]);
	}
	copyArray(arr1,arr2,size);
	printf("Mang sau khi sao chep: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr2[i]);
	}
}
