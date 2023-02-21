#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream scrivo("output.txt");
    ifstream leggo("maggio.txt");
    scrivo.is_open() ? cout << "File scrivo aperto correttamente\n" : cout << "File scrivo NON aperto correttamente\n";
    leggo.is_open() ? cout << "File leggo aperto correttamente\n" : cout << "File leggo NON aperto correttamente\n";
    int indice = 1;
    string riga;
    while (getline(leggo, riga))
    {
        if (riga != "")
        {
            scrivo << indice << " - " << riga << endl;
            indice++;
        }
    }
    scrivo.close();
    leggo.close();
}