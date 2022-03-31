#include<stdio.h>
typedef struct _triangle
{
    float base,altitude,area;
}Triangle;
Triangle input_triangle()
{
    Triangle temp;
    printf("Enter the base and heigth\n");
    scanf("%f%f",&temp.base,&temp.altitude);
    return temp;
}
void find_area(Triangle *t)
{
    t->area=(t->base*t->altitude)/2.0;
}
void output(Triangle t)
{
    printf("The area of the Triangle of base %f and heigth %f is %f\n",t.base,t.altitude,t.area);
}
int main()
{
    Triangle t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
} 