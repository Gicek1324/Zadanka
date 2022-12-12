//bdb
#include <stdio.h>
#include <math.h>

int root(float a, float b, float c, float *x1, float *x2) 
{
    float d = (b * b) - 4 * a * c;
    
    if (d > 0)
    {
        *x1 = (-b - sqrt(d)) / (2 * a);
        *x2 = (-b + sqrt(d)) / (2 * a);
        return 2;
    }
    else if (d == 0)
    {
        *x1 = -b / (2*a);
        return 1;
    }
    else if (d < 0)
    {
        return 0;
    }
    return 0;
    
}
int main()
{
    float x1;
    float x2;
    
    int r = root(1, 5, 6, &x1, &x2);
    
    switch(r)
    {
        case 2:
        {
            printf("%f\n%f\n", x1, x2); 
            break;
        }
        case 1:
        {
            printf("%f\n", x1); 
            break;
        }
        case 0:
        {
            printf("brak pierwiastków");
            break;
        }
    }   
    return 0;
    
}
