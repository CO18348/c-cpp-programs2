#include<stdio.h>
#include<time.h>
int fmax;
int fmin;
int c=0;
void Rminmax(int a[],int i,int j)
{
    c++;
    int gmax,gmin,mid,hmax,hmin;
    if(i==j)
    {
        fmax=a[i];
        fmin=a[i];
    }
    else if(i==(j-1))
    {
        if(a[i]<a[j])
        {
            fmax=a[j];
            fmin=a[i];
        }
        else
        {
            fmax=a[i];
            fmin=a[j];
        }
    }
    else
    {
        mid=(i+j)/2;
        Rminmax(a,i,mid);
        gmax = fmax;
        gmin = fmin;
        Rminmax(a,mid+1,j);
        hmax = fmax;
        hmin = fmin;
        if(gmax>hmax)
            fmax=gmax;
        else
            fmax=hmax;
        if(gmin<hmin)
            fmin=gmin;
        else
            fmin=hmin;
    }
}
int main()
{
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("The array generated is:");
    int a[n];
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%1000;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    Rminmax(a,0,n-1);
    printf("\n\nMax element is:%d\n",fmax);
    printf("Min element is:%d\n",fmin);
    printf("No of comparisons are: %d\n",c);
}
