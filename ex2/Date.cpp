
#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    // Constructeur par defaut
    Date() {
        jour = 1;
        mois = 1;
        annee = 2026;
    }

    // Constructeur avec parametres
    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }

    // Surcharge de l'operateur ==
    bool operator==(const Date& d) {
        return (jour == d.jour &&
                mois == d.mois &&
                annee == d.annee);
    }

    // Surcharge de l'operateur !=
    bool operator!=(const Date& d) {
        return !(*this == d);
    }

    // Methode afficher
    void afficher() {
        cout << jour << "/" << mois << "/" << annee << endl;
    }
};

int main() {
    Date d1(7, 11, 2026);
    Date d2(7, 11, 2026);
    Date d3(15, 8, 2025);

    cout << "Date 1 : ";
    d1.afficher();

    cout << "Date 2 : ";
    d2.afficher();

    cout << "Date 3 : ";
    d3.afficher();

    // Comparaison avec ==
    if (d1 == d2) {
        cout << "Date 1 et Date 2 sont identiques." << endl;
    } else {
        cout << "Date 1 et Date 2 sont differentes." << endl;
    }

    // Comparaison avec !=
    if (d1 != d3) {
        cout << "Date 1 et Date 3 sont differentes." << endl;
    } else {
        cout << "Date 1 et Date 3 sont identiques." << endl;
    }

    return 0;
}

