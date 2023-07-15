#include <iostream>
#include <fstream>
using namespace std;

struct car {
    string brand;
    string model;
    int year;
};

int main() {
    car myCar[2];
    
    for(int i = 0; i < 2; i++) {
        cout << "Brand ke " << i+1 << " = ";
        cin >> myCar[i].brand;
        cout << "Model = ";
        cin >> myCar[i].model;
        cout << "Tahun = ";
        cin >> myCar[i].year;
    }
    
    cout << "\n";
    
    for (int i = 0; i < 2; i++) {
        cout << "Brand My Car = " << myCar[i].brand << "\nModel = " << myCar[i].model << "\nTahun Pembuatan = " << myCar[i].year << "\n";
    }
    
    cout << "\n";
    return 0;
}
