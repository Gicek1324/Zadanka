//bdb
#include <stdio.h>
#define SIZE 10

char * znajdz_znak(char *napis, char szuk_znak)
{
    for (int i = 0; napis[i] != 0; i++)
    if (napis[i] == szuk_znak)
    {
        return &napis[i];
    }
    return NULL;
}

int main()
{
    char *x;
    char tab[SIZE];
    
    fgets(tab, SIZE, stdin);
    x = znajdz_znak(tab, 'j');
    
    if (x == NULL)
    {
        printf("nie znaleziono litery");
    }
    else
    {
        printf("%c", *x);
    }
    return 0;
}
