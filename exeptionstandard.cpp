#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main() {
    cout << "awal program" << endl;
    try{
        array<int, 3> data = { 10, 20, 30};
        cout << data.at(5)<<endl;
    }
}