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
    }
}