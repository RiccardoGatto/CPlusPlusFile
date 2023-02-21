#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
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
            if (index < 10)
            {
                if (line.length() != 0)
                {
                    fileOutput << index << "   - " << line << endl;
                    index++;
                }
            }
            else if (index < 100)
            {
                if (line.length() != 0)
                {
                    fileOutput << index << "  - " << line << endl;
                    index++;
                }
            }
            else
            {
                if (line.length() != 0)
                {
                    fileOutput << index << " - " << line << endl;
                    index++;
                }
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
