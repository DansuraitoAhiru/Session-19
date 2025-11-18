#include <stdio.h>
int compareArrays(int *a,int *b,int n){
	for(int i=0;i<n;i++){
		if(*(a+i)==*(b+i)){
			return 1;
		} else {
			return 0;
		}
	}
}

int main(){
	int arr1[100];
	int arr2[100];
	int size;
	printf("Nhap phan tu mang 1: ");
	scanf("%d", &size);
	for(int i=0;i<size;i++){
		printf("arr1[%d]: ",i);
		scanf("%d", &arr1[i]);
	}
	printf("Nhap phan tu mang 2: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("arr2[%d]: ",i);
		scanf("%d", &arr2[i]);
	}
	int found=compareArrays(arr1,arr2,size);
	if(found==0){
		printf("Khac nhau");
	} else {
		printf("Giong nhau");
	}
}    
