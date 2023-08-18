#include<stdio.h>
int main()
{
	int asize, bsize, msize, i, j;
	int a[10], b[10], merged[20];
	printf("\n enter the first array size:");
	scanf("%d", &asize);
	printf("\n enter the first array elements:");
	for(i=0;i<asize;i++)  {
	scanf("%d", &a[i]);
    }
    printf("\n enter the second array size:");
    scanf("%d", &bsize);
    printf("\n enter the second array elements:");
    for(i=0;i<bsize;i++)  {
    scanf("%d", &b[i]);
    }
    
    for(i=0;i<asize;i++)
    {
    	merged[i] = a[i];
    }
    msize = asize +bsize;
    
    for(i = 0, j = asize; j < msize && i < bsize; i++,j++)
    {
    	merged[j] = b[i];
	}
	printf("\n a[%d] array elements after merging\n", msize);
	for(i = 0; i<msize; i++)
	{
		printf("%d \t ",merged[i]);
	}
	return 0;
}
