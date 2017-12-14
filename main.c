#include <stdio.h>
#include <stdlib.h>

void sleep( int );

#ifdef WIN32
  #define clear() system("cls") 
  #define espera() sleep(500) 
#else
  #define clear() system("/usr/bin/clear")
  #define espera() sleep(3) 
#endif


#define FILEIRAS 9
#define POLTRONAS 4

    // Array Principal
    int lugares [FILEIRAS][POLTRONAS];
#include "eao.h"

int main()
{
    limpandoMatriz(lugares);
    
    // menu( );
    int qtde = 0;
    lugares[0][3] = 1;
    lugares[1][2] = 1;
    lugares[1][3] = 1;
    lugares[3][1] = 1;
    lugares[3][1] = 1;
    lugares[5][1] = 1;
    lugares[5][3] = 1;
    lugares[7][2] = 1;
    lugares[7][0] = 1;
    lugares[0][2] = 1;
    menu();
}
