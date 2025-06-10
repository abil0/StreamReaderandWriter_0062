#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main () {
    string baris;
    string NamaFile;

    cout << "masukkan nama file :" ;
    cin >> NamaFile;


    ofstream outfile;
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= menulis file , \'q\' untuk keluar" << endl;

    while (true)
    {
        cout << "-";
        getline(cin, baris);
        if (baris == "q") break;
        outfile << baris << endl;
    
    }
    outfile.close();
    ifstream infile;
    infile.open(NamaFile, ios::in);
    cout << endl << ">= membuka dan membaca file " << endl;

    if (infile.is_open())
    {
        while (getline(infile, baris))
        {
           cout << baris << '\n';
        }
        infile.close();
    }
    
    
}