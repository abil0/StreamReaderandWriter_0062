#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main () {
    string baris ;

    ofstream outfile;
    outfile.open("contohfile.txt");

    cout << ">= menulis file,\'q\' untuk keluar" << endl;

    while (true) {
        cout << "- ";
        getline(cin,baris);
        if (baris == "q") break;
        outfile << baris << endl;
    }

    outfile.close();

    ifstream infile;
    infile.open("contohfile.txt");
    cout << endl << ">= membuka dan membaca file " << endl;

    if (infile.is_open())
    {
        while (getline(infile, baris))
        {
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();
        
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    
}