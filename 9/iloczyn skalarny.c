//bdb
#include <stdio.h>
float scalarProduct(float vec1[], float vec2[], int lenght)
{
    float result = 0;
    
    for (int i = 0; i < lenght; i++)
    {
        result += vec1[i]*vec2[i];
    }
    
    return result;
}
int main()
{
    float vector1[] = {1.0,2.0,3.0,4.0,5.0};
    float vector2[] = {6.0,7.0,8.0,9.0,10.0};
    float vector3[] = {0.0,2.0,3.0};
    float vector4[] = {0.0,7.0,0.0};
    printf("%f\n%f\n", scalarProduct(vector1, vector2, 5), scalarProduct(vector3, vector4, 3)); 
    
    return 0;
    
}
