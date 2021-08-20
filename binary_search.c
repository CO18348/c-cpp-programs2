//Binary search
#include<stdio.h>
int c=0;
int binarysearch(int a[],int left,int right,int s)
{
    int mid;
    if (right>=1)
    {
        mid=(left+right)/2;
    }
    if(a[mid]==s)
    {
        printf("\nNo of iterations required: %d",c);
        return mid;
    }
    if(a[mid]>s)
    {
        c++;
        return binarysearch(a,left,mid-1,s);
    }
    else if(a[mid]<s)
    {
        c++;
        return binarysearch(a,mid+1,right,s);
    }
    else return -1;
}

int main()
{
    int s,n,flag=0,pos,temp;
    int p;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    //elements present in sorted order in array
    /*for(int i=0;i<n;i++)
    {
        a[i]=i+2;
    } */
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&s);
    //p=rand()%n;
    //s=a[p]; //element to be searched
    int left=0;
    int right=n-1;
    int ans=binarysearch(a,left,right,s);
    pos=ans+1;
    if(ans==-1)
    {
        printf("\nElement not found!");
    }
    else
    {
        printf("\nElement found at position: %d",pos);
    }
}

