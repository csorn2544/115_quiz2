#include<stdio.h>
int main()
{
    int n,i=2,j=0,ntemp;
    scanf("%d",&n);
    ntemp=n;
    if(n%5==0)
    {
        i=5;
    }
    while(n!=1)
    {
        while(n%i==0)
        {
            j++;
            n=n/i;
        }
        if(n%i==1)
        {
            i++;
        }
    }
    if(j!=3)
    {
        if(ntemp==1)
        {
            ntemp=1;
        }
        printf("%d",ntemp);
    }
    if(j>=3)
        printf("Not Cube Free");
}
