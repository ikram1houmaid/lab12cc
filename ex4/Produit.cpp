
#include <iostream>
#include <string>
using namespace std;

class Produit {
private:
    string nom;
    double prix;
    int quantite;

public:
    // Constructeur
    Produit(string n, double p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }

    // Surcharge de l'operateur <<
    friend ostream& operator<<(ostream& os, const Produit& p) {
        os << "Nom : " << p.nom << endl;
        os << "Prix : " << p.prix << " DH" << endl;
        os << "Quantite : " << p.quantite << endl;

        return os;
    }
};

int main() {
    Produit p1("Ordinateur", 6500, 5);
    Produit p2("Souris", 120, 10);

    cout << "Produit 1 :" << endl;
    cout << p1 << endl;

    cout << "Produit 2 :" << endl;
    cout << p2 << endl;

    return 0;
}
