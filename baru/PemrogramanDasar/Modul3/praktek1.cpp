#include<iostream>
using namespace std;

int main(){
    int i;
    int *ia;
    i= 10;
    ia=&i;
    
    cout<<"Alamat dari i adalah : "<<ia<<"\n";
    cout<<"Nilai dari i adalah : "<<i<<"\n";
    cout<<"Nilai dari pointer ia adalah : "<<*ia<<"\n";
    *ia=50;
    cout<<"Nilai dari i sekarang adalah : "<<i<<"\n";
    cout<<"Alamat dari i adalah : "<<&i<<"\n";
    
    return 0;
}