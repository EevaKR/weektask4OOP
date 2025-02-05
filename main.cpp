#include <iostream>
#include "asiakas.h"
#include "luottotili.h"
#include "pankkitili.h"


using namespace std;

int main()
{
    Luottotili luottotili("Asiakas", 1000);
    Pankkitili kayttotili("Asiakas");
    Asiakas asiakas("Asiakas 1", 2500);
    asiakas.showSaldo();
    asiakas.talletus(100);
    asiakas.showSaldo();
    asiakas.nosto(1000000);
    asiakas.showSaldo();
    //asiakas.luotonMaksu(100);
    asiakas.showSaldo();
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
