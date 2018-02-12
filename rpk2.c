#include <stdio.h>
int main(void) {
	char r;
	printf("enter the string:",r);
	scanf("%s",&r);
	if(r>=65&&r<=90||r>=97&&r<=122)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
