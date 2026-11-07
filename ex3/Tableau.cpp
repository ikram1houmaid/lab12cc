
#include <iostream>
#include <stdexcept>
using namespace std;

class Tableau {
private:
    int* data;
    int taille;

public:
    // Constructeur
    Tableau(int n) {
        taille = n;
        data = new int[taille];

        // Initialisation des elements
        for (int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }

    // Surcharge de l'operateur []
    int& operator[](int index) {
        if (index < 0 || index >= taille) {
            throw out_of_range("Indice invalide !");
        }

        return data[index];
    }

    // Destructeur
    ~Tableau() {
        delete[] data;
        cout << "Memoire liberee." << endl;
    }
};

int main() {
    try {
        Tableau t(5);

        // Remplissage du tableau
        for (int i = 0; i < 5; i++) {
            t[i] = (i + 1) * 10;
        }

        // Affichage du tableau
        cout << "Contenu du tableau :" << endl;

        for (int i = 0; i < 5; i++) {
            cout << "t[" << i << "] = " << t[i] << endl;
        }

        // Test d'un indice invalide
        cout << "Test d'un indice invalide :" << endl;
        cout << t[10] << endl;

    } catch (const out_of_range& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
