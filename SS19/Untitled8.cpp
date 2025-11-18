#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void enterArr(int *arr, int *size){
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", size);
	for(int i=0;i<*size;i++){
		printf("arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	printf("Mang sau khi nhap: ");
	for(int i=0;i<*size;i++){
		printf("%d ", *(arr+i));
	}
}

void printEven(int *arr, int size){
	int i,found=0;
	printf("Cac phan tu chan trong mang la: ");
	for(i=0;i<size;i++){
		if(*(arr+i)%2==0){
			printf("%d ", *(arr+i));
			found=1;
		}
	}
	if(!found){
		printf("Hong co");
	}
}

void isPrime(int *arr, int size){
	int found=0;
	printf("Cac so nguyen to trong mang la: ");
	for(int i=0;i<size;i++){
		if(*(arr+i)<2) continue;
		int isPrime=1;
		for(int j=2;j<=sqrt(*(arr+i));j++){
			if(*(arr+i)%j==0){
				isPrime=0;
				break;
			}
		}
	    if(isPrime){
		    printf("%d ",*(arr+i));
		    found=1;
		}
	}
	if(!found) {
		printf("Hong co");
	}
}

void reverse(int *arr, int size){
	int temp;
	for(int i=0;i<size/2;i++){
		temp=*(arr+i);
		*(arr+i)=*(arr+size-1-i);
		*(arr+size-1-i)=temp;
	}
	printf("Mang dao nguoc: ");
	for(int i=0;i<size;i++){
		printf("%d ", *(arr+i));
	}
}

void sort(int *arr, int size){
	printf("1. Sap xep tang dan\n");
	printf("2. Sap xep giam dan\n");
	int choice;
	printf("Nhap lua chon: ");
	scanf("%d",&choice);
	if(choice==1){
		for(int i=0;i<size-1;i++){
			for(int j=0;j<size-1-i;j++){
				if(*(arr+j)>*(arr+j+1)){
					int temp=*(arr+j);
					*(arr+j)=*(arr+j+1);
					*(arr+j+1)=temp;
				}
			}
		}
		printf("Mang sau khi sap xep tang dan: ");
		for(int i=0;i<size;i++){
			printf("%d ", *(arr+i));
		}
	} else if(choice==2){
		for(int i=0;i<size-1;i++){
			for(int j=0;j<size-1-i;j++){
				if(*(arr+j)<*(arr+j+1)){
					int temp=*(arr+j);
						*(arr+j)=*(arr+j+1);
						*(arr+j+1)=temp;
					}
				}
			}
			printf("Mang sau khi sap xep tang dan: ");
		    for(int i=0;i<size;i++){
			printf("%d ", *(arr+i));
		}
	} else {
		printf("Ko co lua chon nay\n");
	}
}

void search(int *arr,int size){
	int value;
	printf("Nhap gia tri can tim: ");
	scanf("%d",&value);
	for(int i=0;i<size;i++){
		if(*(arr+i)==value){
			printf("Tim thay phan tu chi so %d co gia tri bang %d",i,value);
			return;
		}
	}
	printf("Ko tim thay phan tu %d",value);
}

int main(){
	int arr[100],n,choice;
	int flag=0;
	do{
		printf("\n----------------------MENU------------------------");
		printf("\n1. Nhap vao so phan tu va tung phan tu");
		printf("\n2. In ra cac phan tu la so chan");
		printf("\n3. In ra cac phan tu la so nguyem to");
		printf("\n4. Dao nguoc mang");
		printf("\n5. Sap xep mang");
		printf("\n6. Nhap vao 1 phan tu va tim kiem phan tu trong mang");
		printf("\n7. Thoat");
		printf("\nLua chon cua ban la: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				enterArr(arr,&n);
				flag=1;
				break;
			case 2:
				if(flag==0){
					printf("Vui long chon 1 de nhap mang truoc!");
				} else {
					printEven(arr,n);
				}
				break;
			case 3:
				if(flag==0){
					printf("Vui long chon 1 de nhap mang truoc!");
				} else {
					isPrime(arr,n);
				}
			    break;
			case 4:
				if(flag==0){
					printf("Vui long chon 1 de nhap mang truoc!");
				} else {
					reverse(arr,n);
				}
				break;
			case 5:
				if(flag==0){
					printf("Vui long chon 1 de nhap mang truoc!");
				} else {
					sort(arr,n);
				}
				break;
			case 6:
				if(flag==0){
					printf("Vui long chon 1 de nhap mang truoc!");
				} else {
					search(arr,n);
				}
				break;
			case 7:
				printf("Thoat chuong trinh!");
				exit(0);
			default:
				printf("Ko lua chon %d",choice);
		}
	} while(choice!=7);
}
