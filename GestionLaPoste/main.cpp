#include <iostream>
#include "emballage.h"

using namespace std;

int main()
{
    Emballage colis1("XS",1,270,190);
    Emballage *pColis;
    pColis = new Emballage("XL",7,383,250,195);

    colis1.Visualiser();


    delete pColis;
    return 0;
}
