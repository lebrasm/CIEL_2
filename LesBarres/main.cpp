#include <QCoreApplication>
#include "barre.h"
#include "barrecarre.h"
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    BarreCarre uneBarre("Barre 2x2 en Cuivre", 200, 8.920, 2);
    uneBarre.AfficherCaracteristiques();
    cout << "le poid de la barre est "
    cout << uneBarre.CalculerMasse() / 1000.0;
    cout << "kg" << endl;
    cout << endl;

    return(0);
}
