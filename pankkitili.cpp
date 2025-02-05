#include "pankkitili.h"
#include <iostream>
#include "asiakas.h"
#include "luottotili.h"


using namespace std;

Pankkitili::Pankkitili() : saldo(0) {}

Pankkitili::Pankkitili(double aloitussaldo) : saldo(aloitussaldo) {}

Pankkitili::Pankkitili(string nimi) : nimi(nimi), saldo(0) {}

double Pankkitili::getBalance() const {
    return saldo;
}

bool Pankkitili::deposit(double summa) {
    if (summa > 0) {
        saldo += summa;
        return true;
    }
    return false;
}

bool Pankkitili::withdraw(double summa) {
    if (summa > 0 && summa <= saldo) {
        saldo -= summa;
        return true;
    }
    return false;
}
