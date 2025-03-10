#include <iostream>
using namespace std;

double alas,tinggi;

void procedurInput() {
    cout << "masukkan nilai alas : ";
    cin >> alas;
    
    cout << "masukkan nilai tinggi : ";
    cin >> tinggi;
}

double hitungluas(){
    return 0,5 * alas * tinggi;
}

void procedurOutput(){
    cout << "luas segitiga = " <<hitungluas << endl;
}

int main(){
    procedurInput();
    procedurOutput();
}