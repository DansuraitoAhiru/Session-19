#include <stdio.h>
#include<stdlib.h>
void enterArr(int *arr,int *size){
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", size);
	for(int i=0;i<*size;i++){
		printf("arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	printf("Nhap mang thanh cong");
}

void printArr(int *arr,int *size){
	printf("Mang: ");
	for(int i=0;i<*size;i++){
		printf("%d ", *(arr+i));
	}
}

int sum(int *arr, int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=*(arr+i);
	}
	return sum;
}

int max(int *arr,int size){
	int max=*arr;
	for(int i=1;i<size;i++){
		if(*(arr+i)>max){
			max=*(arr+i);
		}
	}
	return max;
}
int main(){
	int n,arr[100],choice;
	int flag=0;
	do{
		printf("\n------------------MENU-----------------");
		printf("\n1. Nhap vao so phan tu va tung phan tu");
		printf("\n2. Hien thi cac phan tu trong mang");
		printf("\n3. Tinh do dai mang");
		printf("\n4. Tinh tong cac phan tu trong mang");
		printf("\n5. Hien thi phan tu lon nhat");
		printf("\n6. Thoat");
		printf("\nLua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				enterArr(arr,&n);
				flag=1;
				break;
			case 2:
				if(flag==0){
					printf("Vui long chon 1 de nhap mang!\n");
				} else {
					printArr(arr, &n);
				}
				break;
			case 3:
				if(flag==0){
					printf("Vui long chon 1 de nhap mang!\n");
				} else {
				    printf("Do dai cua mang: %d\n",n);
				}
				break;
			case 4:
				if(flag==0){
					printf("Vui long chon 1 de nhap mang!\n");
				} else {
				    sum(arr,n);
				    printf("Tong cac phan tu trong mang la: %d\n", sum(arr,n));
				}
				break;
			case 5:
				if(flag==0){
					printf("Vui long chon 1 de nhap mang!\n");
				} else {
				    max(arr,n);
				    printf("Phan tu lon nhat trong mang la: %d\n",max(arr,n));
				}
				break;
			case 6:
				printf("Thoat chuong trinh!");
				exit(0);
		default:
			printf("\nKo co lua chon %d", choice);
		}
	}while(choice!=6);
}
