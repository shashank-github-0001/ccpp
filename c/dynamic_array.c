#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int n;
    printf("\n Enter array size\n ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        printf("\n insufficent memory");
        exit(0);
    }
    
    printf("\n insert item on array\n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    printf("\n Display\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    printf("\n pointer Display\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",*(a+i));
    }
    free(a);
    return 0;
}
