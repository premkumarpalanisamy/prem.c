#include <stdio.h>

int main(void) {
	char a[50];
	int count=0;
	int i;
	scanf("%[\n]s",&a);
	for(i=0;a[i]!='\50';i++)
	{
		if(a[i]==' ')
		{
			count++;
			
		}
	}
	printf("%d",count++);
}
