#include <iostream>
using namespace std;

double alas,tinggi;

void procedurInput() {
    cout << "masukkan nilai alas : ";
    cin >> alas;
    
    cout << "masukkan nilai tinggi : ";
    cin >> tinggi;
}

double hitungluas2(double a, double t){
    return 0,5 * a * t;
}

string ukuransegitiga(double l ){
    //jika luas > 60 
    if(l > 60 ){
        return "besar";
    }
    else{
        return "kecil";
    }
}

void procedurOutput2(){
    cout << "luas segitiga = " << ukuransegitiga(hitungluas2 (alas, tinggi ))  << endl;
}

int main(){
    procedurInput();
    procedurOutput2();
}
