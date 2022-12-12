//jeszcze nie ocenił
//uważajcie bo rozwiązanie jest dość specyficzne więc moze sie kapnąć 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usun_znak(char *n, char z)
{
    for(int i = 0; *(n + i) != '\0'; i++)
    {
        while(*(n + i) == z)
        {
            for(int k = i; *(n + k) != '\0'; k++)
            {
                *(n + k) = *(n + k + 1);
            }
        }
    }
}
int main()
{
    char *napis = malloc(100);
    strcpy(napis, "Zaawansowane techniki programowania ");
    usun_znak(napis, 'a');
    puts(napis);
    free(napis);
    
    return 0;
}
