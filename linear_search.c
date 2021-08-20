//Linear Search
#include<stdio.h>
int main()
{
    int s,n,flag=0,pos,c=0,p;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    //Elements in the array
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to be searched:");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        c++;
        if(a[i]==s)
        {
            flag=1;
            pos=i+1;
            break;
        }
    }

    if(flag==0)
    {
        printf("\nNo such element is present in the array!");
    }
    else
    {
        printf("\nPosition of element in array: %d",pos);
        printf("\nNo of iterations required: %d\n",c);
    }
    return 0;
}
