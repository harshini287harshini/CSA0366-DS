#include<stdio.h>
int main()
{
	int arr1[50],arr2[50],mergedArray[100];
	int size1,size2,mergedsize;
	printf("enter the size of the first array:");
	scanf("%d",&size1);
	printf("enter the elements of the first array:\n");
	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("enter the elements of the second array:");
	scanf("%d",&size2);
	printf("enter the elements of the second array:\n");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	mergedsize= size1 + size2;
	for(int i=0;i<size1;i++){
		mergedArray[size1+i]=arr2[i];
	}
	printf("merged array:");
	for(int i=0;i<mergedsize;i++){
		printf("%d",mergedArray[i]);
	}
	return 0;	
}
