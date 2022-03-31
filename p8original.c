#include<stdio.h>
typedef struct _triangle
{
    float base,altitude,area;
}Triangle;
int input_n()
{
    int x;
    printf("Enter the number of triangles:\n");
    scanf("%d",&x);
    return x;
}
Triangle input_triangle()
{
    Triangle temp;
    printf("Enter the base and heigth\n");
    scanf("%f%f",&temp.base,&temp.altitude);
    return temp;
}
void input_n_triangles(int n, Triangle t[n])
{
    int i;
    for(i=0;i<n;i++)
       t[i]=input_triangle();
}
void find_area(Triangle *t)
{
    t->area=(t->base*t->altitude)/2.0;
}
void find_areas_n(int n, Triangle t[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle temp;
    int i,max=214748364;
    for(i=0;i<n;i++)
    {
        if(t[i].area<max){
            temp=t[i];
            max=t[i].area;
        }
    }
    return temp;
}
void output(int n, Triangle t[n], Triangle smallest)
{
    printf("the smallest of triangles with base and height\n");
    for(int i=0;i<n;i++)
    {
        printf("%d Triangle: %f,%f\n",i+1,t[i].base,t[i].altitude);
    }
    printf("The area of triangle with base =%f and altitude =%f is %f\n",smallest.base,smallest.altitude,smallest.area);
}
int main()
{
    int n=input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_areas_n(n,t);
    Triangle smallest=find_smallest_triangle(n,t);
    output(n,t,smallest);
    return 0;
} 