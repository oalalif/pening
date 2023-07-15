#include <iostream>
#include <cmath> // digunakan untuk fungsi akar kuadrat
using namespace std;

int main() {
    double alas, tinggi, sisiMiring, keliling, luas;
    // deklarasi variabel dengan tipe data double
    
    alas = 5;
    tinggi = 10;
    sisiMiring = sqrt(alas * alas + tinggi * tinggi);
    keliling = alas + tinggi + sisiMiring;
    luas = 0.5 * alas * tinggi;
    // menghitung sisi miring, keliling, dan luas segitiga
    
    cout << "Alas segitiga = " << alas << " cm" << endl;
    cout << "Tinggi segitiga = " << tinggi << " cm" << endl;
    cout << "Keliling segitiga = " << keliling << " cm" << endl;
    cout << "Luas segitiga = " << luas << " cm^2" << endl;
    // menampilkan hasil perhitungan
    
    return 0;
}