#include<stdio.h>
int main()
{
	int i,j,n,temp;
	scanf("%d",&n);
	printf("enter the number\n%d",n);
	
	int a[n];
	printf("\nlist of element");
	for(i=1;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
	   for(j=i+1;j<=n;j++)
	    {
	        if(a[i]>a[j])
	        {
	        temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;
	        }
	}
	}
	printf("sorted list \n");
	for(i=1;i<=n;i++)
	{
	    printf("%d\n",a[i]);
	}
	return 0;
}
