#include<stdio.h>
int main()
{
	int val,n,i,flag=0,p,a[i];
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	printf("enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value to be search:");
	scanf("%d",&val);
	for(i=0;i<n;i++)
	if(a[i]==val)
	{
		flag=1;
		p=i;
	}
	if(flag==1)
	printf("given number %d is found at %d",val,p+1);
	else
	printf("given number %d not found");
}
