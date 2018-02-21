#include <stdio.h>
#include<math.h>

int main(void) {
int n,i,c=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
c++;
}
if(c>0)
{
	printf("Not a prime number");
}
else
{
printf("Prime number");
}	return 0;
}

