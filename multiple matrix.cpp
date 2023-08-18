#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],n,i,j,k;
	printf("enter the order of matrix:");
	scanf("%d",&n);
	printf("enter the elements of matrix-A:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter the elements of matrix-B:");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&b[i][j]);
			}
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			for(k=0;k<n;k++){
				c[i][j]+=a[i][j]*b[i][j];
			}
		}
	}
	printf("product of two matrices:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("%d\t",c[i][j]);
	}
	printf("\n");
	}
	return 0;
}
