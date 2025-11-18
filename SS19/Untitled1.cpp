#include <stdio.h>
int arr[100],n;
void findMax(int *arr,int n){
	int i;
	int max=*arr;
	for(i=0;i<n;i++){
		if(max<*(arr+i)){
			max=*(arr+i);
		}
	}
	printf("Phan tu lon nhat trong mang la phan tu %d", max);
}
int main(){
	printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
    	printf("Nhap phan tu %d: ",i);
    	scanf("%d", &arr[i]);
    }
	findMax(arr,n);
}
