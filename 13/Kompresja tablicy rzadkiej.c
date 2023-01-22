#include <stdio.h>
#include <stdlib.h>

int * compress(double ** adr_table, int *adr_size)
{
    int new_size = 0;
    for (int i = 0; i < *adr_size; i++)
        if ((*adr_table)[i] != 0)
            new_size++;

    double *compressed = (double*) malloc(sizeof(double) * new_size);
    int *indices = (int*) malloc(sizeof(int) * new_size);

    if (compressed == NULL || indices == NULL)
        return NULL;

    int j = 0;
    for (int i = 0; i < *adr_size; i++)
        if ((*adr_table)[i] != 0)
        {
            compressed[j] = (*adr_table)[i];
            indices[j] = i;
            j++;
        }

    free(*adr_table);
    *adr_table = compressed;
    *adr_size = new_size;
    return indices;
}

int main()
{
    int size = 10;
    double *tab = (double*) malloc(sizeof(double) * size);
    tab[2] = 3.0;
    tab[5] = 1.0;
    tab[8] = 7.0;

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%.1f ", tab[i]);
    printf("\n");

    int *indices = compress(&tab, &size);
    printf("Compressed array: ");
    for (int i = 0; i < size; i++)
        printf("%.1f ", tab[i]);
    printf("\n");

    printf("Indices array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", indices[i]);
    printf("\n");

    free(tab);
    free(indices);
    return 0;
}
