#include <stdio.h>

 
void main()
{
    char s[200];
    int count = 0, j;
 

    scanf("%[^\n]s", s);
    for (j = 0;s[j] != '\0';j++)
    {
        
            count++;    
    }
    printf("%d", count);
}
