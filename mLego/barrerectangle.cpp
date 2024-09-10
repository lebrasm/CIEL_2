#include "barrerectangle.h"
#include <iostream>
#include <string>
#include "math.h"

using namespace std;

BarreRectangle::BarreRectangle(string _reference,
                               int _longueur,
                               float _densite,
                               string _nomAlliage,
                               float _largeurRect):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    largeurRect(_largeurRect)
{
    cout << "Constructeur de BarreRectangle" << endl;
}

void BarreRectangle::afficherCaracteristique(){
    Barre::afficherCaracteristique();
    cout << "Largeur de la Barre : " << largeurRect << " cm" << endl;
    cout << "Masse : " << BarreRectangle::calculMasse() << "kg" << endl;
    cout << endl;
}

double BarreRectangle::calculSection(){
    return longueur * largeurRect;
}

double BarreRectangle::calculMasse()
{
    return (calculSection() * longueur * densite) / 1000.0;
}
