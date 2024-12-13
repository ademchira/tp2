#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void dessinerCone(int hauteurCone, vector<pair<int, int>>& positionsBoules) {
    int largeur = 2 * hauteurCone - 1;
    int milieu = largeur / 2;
    for (int i = 0; i < hauteurCone; ++i) {
        for (int j = 0; j < largeur; ++j) {
            bool bouleTrouvee = false;
            for (auto& pos : positionsBoules) {
                if (pos.first == i && pos.second == j) {
                    cout << "O";
                    bouleTrouvee = true;
                    break;
                }
            }
            if (!bouleTrouvee && j >= milieu - i && j <= milieu + i) {
                cout << "*";
            } else if (!bouleTrouvee) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void dessinerTronc(int hauteurTronc, int largeurTronc, int largeurCone) {
    int espace = (largeurCone - largeurTronc) / 2;
    for (int i = 0; i < hauteurTronc; ++i) {
        for (int j = 0; j < espace; ++j) {
            cout << " ";
        }
        for (int j = 0; j < largeurTronc; ++j) {
            cout << "|";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));

    int hauteurCone, hauteurTronc, largeurTronc, nombreBoules;
    cin >> hauteurCone >> hauteurTronc >> largeurTronc >> nombreBoules;

    vector<pair<int, int>> positionsBoules;
    int largeurCone = 2 * hauteurCone - 1;
    for (int i = 0; i < nombreBoules; ++i) {
        int ligne = rand() % hauteurCone;
        int colonne = (largeurCone / 2 - ligne) + (rand() % (2 * ligne + 1));
        positionsBoules.emplace_back(ligne, colonne);
    }

    dessinerCone(hauteurCone, positionsBoules);
    dessinerTronc(hauteurTronc, largeurTronc, largeurCone);

    return 0;
}
