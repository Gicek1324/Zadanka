//ocena bdb
#include <stdio.h>
#include <stdlib.h>

int *dynamicTable(int l)
{
    int *tab = malloc(l * sizeof(int));
    if(tab == NULL)
    {
        return NULL;
    }
    for(int i = 0, j = 1; i < l; j += 2, i++)
    {
        tab[i] = j;
    }    
    return tab;
}
int main()
{
    int l = 0;
    scanf("%i", &l);
    int *out_table = dynamicTable(l);
    if(out_table != NULL)
    {
        for(int i = 0; i < l; i++)
        {
            printf("%i", *(out_table + i));
        }
    }
    else
    {
        printf("NULL");
    }
    free(out_table);
    return 0;
}
