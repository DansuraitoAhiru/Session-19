#include <stdio.h>
int arr[100],n;
void countEvenOdd(int *arr, int n, int *even, int *odd){
	*even=0;
	*odd=0;
	for(int i=0;i<n;i++){
	    if(*(arr+i)%2==0){
		    (*even)++;
	    } else {
		    (*odd)++;
		}
	}
	printf("So phan tu chan la: %d\n", *even);
	printf("So phan tu le la: %d\n", *odd);
}
int main(){
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	int even,odd;
	countEvenOdd(arr,n,&even,&odd);
}
