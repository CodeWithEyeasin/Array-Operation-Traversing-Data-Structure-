#include<stdio.h>
int main()
{
    int i,size;
    printf("Enter array size: \n");
    scanf("%d",&size);
    int array[size];
    for(i=0;i<size;i++)
    {
        printf("Array [%d] =",i);
        scanf("%d",&array[i]);
    }
    printf("Output: \n");
    for(i=0;i<size;i++)
    {
        printf("Array [%d] = %d\n",i,array[i]);
    }
    return 0;
}
