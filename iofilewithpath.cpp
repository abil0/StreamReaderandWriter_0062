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
     
        
    }
    
}