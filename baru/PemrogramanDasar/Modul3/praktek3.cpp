#include<iostream>
using namespace std;

typedef struct{
    int nim;
    float ipk;
} mahasiswa;

mahasiswa m;
mahasiswa *p=&m;

int main(){
    
    m.nim=247;
    m.ipk=3.14;
    cout<<"NIM : "<<p->nim<<"\n";
    cout<<"IPK : "<<p->ipk<<"\n";
}