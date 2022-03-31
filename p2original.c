#include<stdio.h>
int input_side()
{
    int x;
    printf("Enter the side:\n");
    scanf("%d",&x);
    return x;
}
int check_scalene(int a, int b, int c)
{
    if(a!=b && b!=c && c!=a)
       return 1;
    return 0;
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene)
        printf("The triangle with sides %d,%d,%d is a scalene triangle\n",a,b,c);
    else
        printf("The triangle with sides %d,%d,%d is not a scalene triangle\n",a,b,c);
}
int main()
{
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
} 