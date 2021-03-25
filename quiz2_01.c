#include<stdio.h>
int main()
{
    int n,i=2,j=1,k=0,pos,d,ntemp;
    scanf("%d",&n);
    ntemp=n;
    while(n!=1)
    {
        if(n%i==0)
        {
            j++;
            if(j==3)
            {
                break;
            }
        }
        else if(n%i==1&&k==0)
        {
            j=1;
            i++;
            n=ntemp;
        }
        else if(n%i==1)
        {
            j=1;
            i++;
        }
        n=n/i;
        k++;
    }
    if(j!=3)
    {
        printf("%d",ntemp);
    }
    if(j>=3)
        printf("Not Cube Free");
}
