#include<stdio.h>
#define size 25
void input(int arr[size]){
	int i=0;
	for(i=0;i<size;i++){
		printf("enter the element [%d]",i+1);
		scanf("%d",&arr[i]);
	}
}

void print(int arr[size]){
	int j=0;
	for (j=0;j<size;j++){
		printf(" %d",arr[j]);
	}
}
void deletion(int arr[25]){
	int z=0;
	int n=0;
	printf("/nenter the index of element to remove:");
	scanf("%d",&z);
	for(n=z;n<size-1;n++){
	arr[n]=arr[n+1];
	
}  }
void printd(int arr[25]){
	int n=0;
	for (n=0;n<size-1;n++){
		printf(" %d",arr[n]);
	}
}
void insertion(int arr[25]){
	int a=0,b=0,y=0;
	printf("\nenter the number  to insert:");
	scanf("%d",&y);
	printf("enter the index:");
	scanf("%d",&a);
	
	for (b=size+1;b>a;b--){
		arr[b]=arr[b-1];
	}
	arr[a]=y;
}
void printi(int arr[25]){
	int b=0;
	for (b=0;b<size;b++){
		printf(" %d",arr[b]);
	}
}

int main (){
	int arr[25];
	input (arr);
	print (arr);
	deletion(arr);
	printd(arr);
	insertion(arr);
	printi(arr);
	return 0;
}
