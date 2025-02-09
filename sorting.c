#include<stdio.h>
int main (){
	int n=0,m=0,i=0,j=0;
	printf("enter the number of elements in arr1:");
	scanf("%d",&n);
	printf("enter the number of elements in arr2:");
	scanf("%d",&m);
	printf("enter the array1:\n");
	int arr1[n];
	for(i=0;i<n;i++){
		printf("enter the element a[%d]",i+1);
		scanf("%d",&arr1[i]);
	}
	i=0;
	printf("enter the array2:\n");
	int arr2[m];
	for(i=0;i<m;i++){
		printf("enter the element a[%d]",i+1);
		scanf("%d",&arr2[i]);
	}
	i=0;
	j=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr1[i]>arr1[j]){
				arr1[i]=arr1[i]+arr1[j];
				arr1[j]=arr1[i]-arr1[j];
				arr1[i]=arr1[i]-arr1[j];
			}
		}
	}
	printf("\nArray1 in ascending order:");
	for (i=0;i<n;i++){
		printf(" %d",arr1[i]);
	}
	i=0;
	j=0;
		for(i=0;i<m-1;i++){
		for(j=i+1;j<m;j++){
			if(arr2[i]>arr2[j]){
				arr2[i]=arr2[i]+arr2[j];
				arr2[j]=arr2[i]-arr2[j];
				arr2[i]=arr2[i]-arr2[j];
			}
		}
	}
	printf("\nArray2 in ascending order:");
	for (i=0;i<m;i++){
		printf(" %d",arr2[i]);
	}
	i=0;
	j=0;
	printf("\n");
	for(i=n;i<n+m;i++){
		arr1[i]=arr2[i-n];
	}
	printf("merged array :");
	for(i=0;i<n+m;i++){
		printf("% d",arr1[i]);
	}
	

	
	return 0;
	
}
