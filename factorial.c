#include<stdio.h>
static int r=1;

int fact(int n);

int main()
{
    printf("%d\n", fact(4));
}

int fact(int n)
{
    if(n==0 || n==1)
        return r;
    else
    {
        r *= n;
        n--;
        return fact(n);
    }
    
}
