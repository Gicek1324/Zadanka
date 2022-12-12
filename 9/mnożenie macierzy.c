//skończne
#include <stdio.h>
#define ROW1 2
#define COL1 3
#define ROW2 3
#define COL2 2

int main()
{
    int array1[ROW1][COL1] = {{0,1,2},
                              {1,4,6}};
                              
    int array2[ROW2][COL2] = {{5,1},
                              {1,3},
                              {0,3}};
                              
    int resultArray[ROW1][COL2];

    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            int result = 0;
            for (int k = 0; k < ROW2; k++)
                result += array1[i][k] * array2[k][j];
                
            resultArray[i][j] = result;
        }
    }
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
        printf("%d ", resultArray[i][j]);
        }
        
    printf("\n");
       
    }
    
    return 0;
    
}
