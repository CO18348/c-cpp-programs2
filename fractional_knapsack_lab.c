#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n;
    printf("Enter maximum capacity of knapsack:");
    scanf("%d",&m);
    printf("Enter the total number of items:");
    scanf("%d",&n);
    int v[n],w[n];// v is the cost/value and w is the weight
    printf("Enter the values/cost (in order):");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    printf("Enter the weights (in order):");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    int c=0,i=0;
    do
    {
        if(w[i]<=m)
        {
            m=m-w[i];
            c=c+v[i];
            printf("Weight of item %d used: %d\n",i+1,w[i]);
            i++;
        }
        else if(w[i]>m)
        {
            c=c+(m*v[i]/w[i]);
            printf("Weight of item %d used: %d\n",i+1,m);
            m=0;
            break;
        }
    }while(m!=0);
    printf("Total cost to fill the knapsack is:");
    printf("%d ",c);
}
