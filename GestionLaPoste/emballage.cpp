#include "emballage.h"

Emballage::Emballage(const string _format, const int _resistance, const int _largeur, const int _longueur, const int _hauteur):
    format(_format),
    resistance(_resistance),
    largeur(_largeur),
    longueur(_longueur),
    hauteur(_hauteur),
    stock(0)
{
    cout << "constructeur : Emballage /" << format  << endl;
}

Emballage::~Emballage()
{
    cout << "destructeur : Emballage /" << format  << endl;
}

void Emballage::Visualiser()
{
    cout << format << resistance<< "kg" <<endl;
}


