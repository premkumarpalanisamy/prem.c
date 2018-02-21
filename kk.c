#include <stdio.h>
 
int main(void) {
	// your code goes here
	int i,t=0,t1=0;
	for(i=1;i<=15;i++)
	{
		t=t+i;
	}
	for(int j=15;j<=45;j++)
	{
		if(j%2!=0)
		{
			t1=t1+j;
		}
	}printf("%d\n%d",t,t1);
	return 0;
}
