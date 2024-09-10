#include <iostream>
#include "barre.h"
#include <string>
#include "barrecarre.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

int main()
{
    Barre uneBarre("154", 200, 8.73, "fer");
    BarreRonde uneBarreRonde("Barre ronde", 200, 8.73, "cuivre", 8.2);
    BarreRectangle uneBarreRectangle("Barre Rectangle", 50, 90.30, "or", 10);
    BarreCarre uneBarreCarre("Barre Carrée", 5, 36.2, "or", 5);
;
    uneBarreRectangle.afficherCaracteristique();
    uneBarreRonde.afficherCaracteristique();
    uneBarreCarre.afficherCaracteristique();

    return 0;
}
