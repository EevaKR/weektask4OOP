#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
private:

    Pankkitili kayttotili;
    Luottotili luottotili;
public:
    Asiakas();
    Asiakas(string nimi, double luottoRaja);
    void showSaldo() const;
    bool talletus(double summa);
    bool nosto(double summa);
    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);
};

#endif // ASIAKAS_H
