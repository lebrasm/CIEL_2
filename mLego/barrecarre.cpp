#include "barrecarre.h"
#include <iostream>
#include <string>

using namespace std;

BarreCarre::BarreCarre(string _reference, int _longueur, float _densite, string _nomAlliage, float _cote) :
    Barre(_reference, _longueur, _densite, _nomAlliage),
    cote(_cote)
{

}

void BarreCarre::afficherCaracteristique()
{
    Barre::afficherCaracteristique();
    cout << "Le côté de la barre carrée est de :" << cote << "cm";
}

double BarreCarre::CalculerSection()
{
    return  cote * cote ;
}

double BarreCarre::CalculerMasse()
{
    return   CalculerSection() * longueur * densite ;
}
