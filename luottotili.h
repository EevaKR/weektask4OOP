#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"
#include <iostream>

using namespace std;

class Luottotili : public Pankkitili
{




public:
    Luottotili();
    Luottotili(string& nimi, double luottoRaja);
    bool withdraw(double summa);
    bool deposit(double summa);
    double luottoRaja;

};

#endif // LUOTTOTILI_H
