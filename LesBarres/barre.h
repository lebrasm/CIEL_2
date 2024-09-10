#ifndef BARRE_H
#define BARRE_H
#include <string>

class Barre
{

protected:
    string reference;
    int longeur;
    float densite;

public:DéveloppemeDéveloppementnt
    Barre(const string -reference, const int _longeur, const float _densite);
    ~Barre();
    void AfficherCaracteristiques();
    float CalculerMasse() {return0;}
};

#endif // BARRE_H
