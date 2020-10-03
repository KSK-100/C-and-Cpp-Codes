#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void main()
{
	int i,j,n,min;
	clock_t start,end;
	
	printf("\nenter the size:");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n entering random elements into array");
	for(i=1;i<=n;i++)
	{
		a[i]=rand()%100;
		printf("%d\t",a[i]);
	}
	
	start=clock();
	
	for(i=0;i<n;i++)
	{	
		min=0;	
		for(j=i;j<n;j++)
		{
			if(a[j]<a[i])
			min=a[j];
		}
		
		int t=a[min];
		a[min]=a[j];
		a[j]=t;
	}
	
	end=clock();
	
	printf("\nSorted array is:");
	
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		

	printf("\nStart time is %lf",(double)start/CLOCKS_PER_SEC);
	printf("\nEnd time is %lf",(double)end/CLOCKS_PER_SEC);
	printf("\nTotal time taken is %lf",(double)(end-start)/CLOCKS_PER_SEC);
}
	
	
