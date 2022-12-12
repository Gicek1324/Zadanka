//skończne
#include <stdio.h>
#define ROW 3
#define COL 4

int main()
{
    int array1[ROW][COL] = {{5,1,7,4},
                            {1,3,7,3},
                            {8,0,3,1}};
    int array2[ROW][COL] = {{0,3,1,2},
                            {3,3,4,6},
                            {3,8,2,1}};
    int resultArray[ROW][COL];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            resultArray[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
        printf("%d ", resultArray[i][j]);
        }
        
    printf("\n");
       
    }
    
    return 0;
    
}
