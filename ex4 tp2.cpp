#include <iostream>
using namespace std;


int add(int x, int y) {
    return x + y;
}

int sous(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

int dive(int x, int y) {
    if (y == 0) {
        cout << "Erreur : Division par z�ro !" << endl;
        return 0;
    }
    return x / y;
}

int main() {
    int a, b;

    cout << "Entrez deux nombres : ";
    cin >> a >> b;

      int choix;

    do {
        cout << "\nChoisissez une operation : " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Soustraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quitter" << endl;
        cout << "Entrez le num�ro de l'operation : ";
        cin >> choix;

        switch (choix) {
            case 1:
                cout << "R�sultat de " << a << " + " << b << " = " << add(a, b) << endl;
                break;
            case 2:
                cout << "R�sultat de " << a << " - " << b << " = " << sous(a, b) << endl;
                break;
            case 3:
                cout << "R�sultat de " << a << " * " << b << " = " << mul(a, b) << endl;
                break;
            case 4:
                cout << "R�sultat de " << a << " / " << b << " = " << dive(a, b) << endl;
                break;
            case 5:
                cout << "Vous avez choisi de quitter." << endl;
                system("cls");
                break;
            default:
                cout << "Choix invalide. Veuillez r�essayer." << endl;
                break;
        }

    } while (choix != 5);



    return 0;
}
