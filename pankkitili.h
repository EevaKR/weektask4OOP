#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>
using namespace std;

class Pankkitili
{
protected:
    string nimi;
    double saldo;

public:
    Pankkitili();
    Pankkitili(double aloitussaldo);
    Pankkitili(string nimi);
    double getBalance() const;
    bool deposit(double summa);
    bool withdraw(double summa);
};



#endif // PANKKITILI_H
