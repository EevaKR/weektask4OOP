#include "luottotili.h"
#include <iostream>
#include "asiakas.h"
#include "luottotili.h"
#include "pankkitili.h"


using namespace std;

Luottotili::Luottotili() {
    cout << "Kutsutaan luottotili-konstruktoria" << endl;
}

Luottotili::Luottotili(string& nimi, double luottoRaja) : Pankkitili(nimi), luottoRaja(luottoRaja) {

}

bool Luottotili::withdraw(double summa) {
    if (summa > 0 && (saldo - summa) >= -luottoRaja) {
        saldo -= summa;
        return true;
    }
    return false;
}

bool Luottotili::deposit (double summa) {
    if (summa > 0 && saldo + summa <= 0) {
        saldo += summa;
        return true;
    }
    return false;
}
