#include <stdio.h>

long long fact(int n);

int main()
{
    int n;
    long long k=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
            printf("  ");
        for(int j=0; j<=i; j++)
        {
            k= fact(i)/(fact(j)*fact(i-j));
            printf("%4llu ", k);
        }
        printf("\n");
    }

    return 0;
}

long long fact(int n)
{
    long long p=1;
    for(int i=1;i<=n;i++)
        p *= i;
    return p;
}
