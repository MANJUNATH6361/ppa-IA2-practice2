#include<stdio.h>
void input_string(char a[])
{
    printf("Enter the string\n");
    scanf("%s",a);
}
void str_reverse(char a[])
{
    char t;
    int i,j;
    for(j=0;a[j]!='\0';j++){}
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
void output(char a[])
{
    printf("The reversed string is %s\n",a);
}
int main()
{
    char a[20];
    input_string(a);
    str_reverse(a);
    output(a);
    return 0;
} 