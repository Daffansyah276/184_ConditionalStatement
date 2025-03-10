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

double hitungluas2(double a, double t){
    return 0,5 * a * t;
}
void procedurOutput(){
    cout << "luas segitiga = " <<hitungluas ()<< endl;
}

void procedurOutput2(){
    cout << "luas segitiga = " << hitungluas2(alas, tinggi) << endl;
}

int main(){
    procedurInput();
    procedurOutput();
    procedurOutput2();
}