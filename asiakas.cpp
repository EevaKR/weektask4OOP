#include "asiakas.h"
#include "luottotili.h"
#include "pankkitili.h"

#include <iostream>

using namespace std;

Asiakas::Asiakas() {
    cout << "Kutsutaan asiakas konstruktoria" << endl;
}

Asiakas::Asiakas(string nimi, double luottoRaja): kayttotili(nimi), luottotili(nimi, luottoRaja)
{

}

void Asiakas::showSaldo() const
{
    cout << "Pankkitilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;


}
bool Asiakas::talletus(double summa) {
    return kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa) {
    return kayttotili.withdraw(summa);
}
