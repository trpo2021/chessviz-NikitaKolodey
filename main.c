#include <stdio.h>

int main(void) 
{
    int l,w,i,j;
    printf("Введите длину:\n");
    scanf("%d",&l);
    printf("Введите ширину:\n");
    scanf("%d",&w);
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=w;j++)
        {
            if((i+j)%2==0)
                printf("[X]");
            else printf("[ ]");
        }
        printf("\n");
    }
    return 0;
}