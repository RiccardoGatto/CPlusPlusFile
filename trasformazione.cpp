#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream fileOutput("output.txt");
    ifstream fileInput("maggio.txt");
    if (fileInput.is_open() and fileOutput.is_open())
    {
        int index = 1;
        string line;
        while (getline(fileInput, line))
        {
            if (line != "")
            {
                fileOutput << index << " - " << line << endl;
                index++;
            }
        }
        fileInput.close();
        fileOutput.close();
    }
    else
    {
        cout << "Errore durante l'apertura dei files";
    }
}
