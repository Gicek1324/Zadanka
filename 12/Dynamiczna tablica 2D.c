//ocena: dst
//kom: float **matrix = malloc(w * k * sizeof(float));błędny przydział pamięci - nie powinno tu być k natomiast elementem tablicy nie jest float tylko adres.
//W sumie dla k>2 oprzydziela Pan za dużo pamięci, a dla k==1 program wyleci.
//for (float **i = tab; i < tab + w; i++)
//for (float *j = *i; j < *i + k; j++)
//{
//*j = x; -- prosiłem o notację tablicową
//x++;
//}
//=====
//printMatrix(dynamixMatrix, 4, 3);
//if (dynamixMatrix == NULL) -- najpierw wypisuje Pan tablicę, a potem sprawdza czy istnieje???
//w dodatku tu mogły się Pany wyświetlić śmieci - nie użył Pan calloc-a który gwarantuje wyzerowanie pamięci
//===
//nienazwane stałe 3 i 4

#include <stdio.h>
#include <stdlib.h>

float **createMatrix(int w, int k)
{
    float **matrix = malloc(w * k * sizeof(float));
    if (matrix == NULL)
    {
        return NULL;
    }
    for (float **i = matrix; i < matrix + w; i++)
    {
        *i = malloc(k* sizeof(float));
        if (*i == NULL)
        {
            deleteMatrix(&matrix, i - matrix);
            return NULL;
        }
    }
    return matrix;
}
void fillMatrix(float **tab, int w, int k)
{
    int x = 0;
    for (float **i = tab; i < tab + w; i++)
        for (float *j = *i; j < *i + k; j++)
        {
            *j = x;
            x++;
        }
}
void printMatrix(float **tab, int w, int k)
{
    for (float **i = tab; i < tab + w; i++)
    {
        for (float *j = *i; j < *i + k; j++)
        {
            printf("%f ", *j);
        }
        printf("\n");
    }
}
void deleteMatrix(float ***a_tab, int w)
{
    for (float **i = *a_tab; i < *a_tab + w; i++)
    {
        free(*i);
    }
    free(*a_tab);
    *a_tab = NULL;
}
int main()
{
    float **dynamixMatrix = createMatrix(4, 3);
    printMatrix(dynamixMatrix, 4, 3);
    if (dynamixMatrix == NULL)
    {
        printf("Error");
    }
    else
    {
        fillMatrix(dynamixMatrix, 4, 3);
        printMatrix(dynamixMatrix, 4, 3);
        deleteMatrix(&dynamixMatrix, 4);
        printf("%i", dynamixMatrix);
    }
    return 0;
}
