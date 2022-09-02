#include <stdio.h>
#include <stdbool.h>

//Ohjelma kysyy käyttäjältä kokonaisluvun. Jos käyttäjän
//antama luku on pienempi, kuin 10 saa käyttäjä
//ilmoituksen "Annoit luvun joka pienempi kuin 10"

int main()
{
    int nmr;

    printf("Kerro jokin kokonaisluku\n");
    scanf("%d",&nmr);

    if (nmr<10)
    {
        printf("Annoit luvun joka on pienempi kuin kymmenen\n");
    }
    else if(nmr==10)
    {
        printf("Annoit luvun kymmenen\n");
    }
    else
    {
        printf("Annoit numeron joka on suurempi, kuin kymmenen\n");
    }

    return 0;
}
