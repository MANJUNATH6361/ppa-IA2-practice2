

#include <stdio.h>
int input()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    return x;
}
int gcd(int a, int b)
{
    a = ( a > 0) ? a:-a;
    b = ( b > 0) ? b:-b;
    while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b-= a;
    }
    /*for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd*/
    return a;
}
void output(int a, int b, int gcd)
{
    printf("G.C.D of %d and %d is %d",a,b,gcd);
}
int main()
{
    int a,b,g;
    a=input();
    b=input();
    g=gcd(a,b);
    output(a,b,g);
    return 0;
} 