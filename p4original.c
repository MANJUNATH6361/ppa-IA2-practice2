
#include<stdio.h>
int input_array_size()
{
    int x;
    printf("Enter the array size:\n");
    scanf("%d",&x);
    return x;
}
void input_array(int n, int a[n])
{
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int is_composite(int n)
{
    int x=n;
    int count=0;
    for(int i=1;i<=x;i++)
    {
        if(n%i==0)
           count++;
    }
    return count;
}
int sum_composite_numbers(int n, int a[n])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        if(is_composite(a[i])>2)
           sum+=a[i];
    }
    return sum;
}
void out_put(int sum)
{
    printf("The Sum of composite is %d\n",sum);

}
int main()
{
    int n=input_array_size();
    int a[n],sum;
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    out_put(sum);
    return 0;
} 