//ocena +db
//kom: stałą 10 warto było jakoś nazwać, printf("%f ", table[i]); -- %lf bo to double
#include <stdio.h>
#include <stdlib.h>

double *add(double *tab, int n, double new_elem)
{
    double *out_tab = malloc((n + 1) * sizeof(double));
    if (out_tab == NULL)
    {
        return NULL;
    }    
    for (int i = 0; i < n; i++)
    {
        out_tab[i] = tab[i];
    }    
    free(tab);
    out_tab[n] = new_elem;
    return out_tab;
}

int main()
{
    double *table = NULL;

    for (int i = 0; i < 10; i++)
    {
        table = add(table, i, i + 1);
        if (table == NULL)
        {
            printf("Error");
            return 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
            printf("%f ", table[i]);
    }
    free(table);
    return 0;
}
