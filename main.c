#include <stdio.h>
#include <stdlib.h>
int power(int base,int exponent)
{
    long long result=1;
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    return result;
}
int main()
{
    int power(int base,int exponent);
    int m,n,i,res=(-1),j,c=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[n];
    for(i=0;res!=0,i<n;i++)
    {
        res=((power(2,i))*m)%n;
        arr[i]=res;
    }
    res=1;
    for (i = 1; i < n; i++)
    {
        j = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if(i==j)
        {
            res++;
        }
    }
    printf("%d",res);
    return 0;
}
