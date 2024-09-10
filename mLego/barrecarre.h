#ifndef BARRECARRE_H
#define BARRECARRE_H
#include "barre.h"
#include <string>

using namespace std;

class BarreCarre : public Barre
{
public:
    BarreCarre(string _reference, int _longueur, float _densite, string _nomAlliage, float _cote);
    void afficherCaracteristique();
    double CalculerSection();
    double CalculerMasse();

protected:
    float cote;
};

#endif // BARRECARRE_H
