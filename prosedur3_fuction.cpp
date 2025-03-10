#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput() {
    cout << "masukkan nilai alas : ";
    cin >> alas;
    
    cout << "masukkan nilai tinggi : ";
    cin >> tinggi;
}

void procedurHitungLuas(){
    luas = 1/2 * alas * tinggi;
}

void procedurOutput(){
    cout << "luas segitiga = " << luas << endl;
}

int main(){
    procedurInput();
    procedurHitungLuas();
    procedurOutput();
}