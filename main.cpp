#include <iostream>
#include "asiakas.h"
#include "luottotili.h"
#include "pankkitili.h"


using namespace std;

int main()
{
    string nimi1 = "Asiakas1";
    string nimi2 = "Asiakas2";
    Asiakas asiakas1(nimi1, 2000);
    Asiakas asiakas2(nimi2, 1500)
    Luottotili luottotili("Asiakas", 1000);
    cout << "Pankkitili luotu " << luottotili <<
        "luottoraja: " << luottotili.luottoRaja << endl;
    Pankkitili kayttotili("Asiakas");
    Asiakas asiakas("Asiakas 1", 2500);
    asiakas1.showSaldo();
    asiakas1.talletus(100);
    asiakas1.showSaldo();
    asiakas1.nosto(1000000);
    asiakas1.showSaldo();
    //asiakas.luotonMaksu(100);
    asiakas1.showSaldo();
    cout << "Pankkitilin saldo: " << kayttotili.getBalance() << endl;

    kayttotili.deposit(6);
    cout << "Pankkitilin saldo talletuksen jalkeen: " << kayttotili.getBalance() << endl;
    kayttotili.withdraw(7);
    cout << "Pankkitilin saldo noston jalkeen: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
    luottotili.withdraw(9);
    cout << "Luottotilin saldo noston jalkeen: " << luottotili.getBalance() << endl;
    luottotili.deposit(10);
    cout << "Luottotilin saldo talletuksen jalkeen: " << luottotili.getBalance() << endl;
    return 0;
}
