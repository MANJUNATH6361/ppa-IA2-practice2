#include<stdio.h>
void input(float *base, float *height)
{
    printf("Enter the base and height:\n");
    scanf("%f%f",base,height);
}
void find_area(float base , float height, float *area)
{
    *area=(base*height)/2.0;
}
void output(float base, float height, float area)
{
    printf("The area of a triangle with base %f and heigth %f is %f\n",base,height,area);
}
int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
} 