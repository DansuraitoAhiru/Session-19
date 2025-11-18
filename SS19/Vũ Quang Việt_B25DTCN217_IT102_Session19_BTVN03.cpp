#include <stdio.h>
void average(int *arr, int n, float *result){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=*(arr+i);
	}
	*result=sum/(n*1.0);
}

int main(){
	int arr[100],n;
	float avg;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	average(arr,n,&avg);
	printf("Gia tri trung binh cac phan tu trong mang: %.2f", avg);
}
