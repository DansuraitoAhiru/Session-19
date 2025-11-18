#include <stdio.h>
int countValue(int *arr, int n, int x){
	int count=0;
	for(int i=0;i<n;i++){
		if(*(arr+i)==x){
			count++;
		}
	}
	return count;
}

int main(){
	int arr[100],n,x;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap gia tri can tim: ");
	scanf("%d",&x);
	int cnt=countValue(arr,n,x);
	printf("Phan tu %d xuat hien %d lan",x,cnt);
}
