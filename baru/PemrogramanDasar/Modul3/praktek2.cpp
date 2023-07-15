#include<iostream>
using namespace std;

int main(){
    float nilai[3], *penunjuk;
    
    nilai[0]=110;
    nilai[1]=120;
    nilai[2]=130;
    penunjuk = &nilai[0];
    
    cout<<"Nilai %f ada di alamt : "<<*penunjuk;
    cout<<penunjuk<<"\n";
    cout<<"Nilai %f ada di alamat : "<<(*penunjuk+1);
    cout<<(penunjuk+1)<<"\n";
    cout<<"Nilai %f ada di alamat ; "<<(*penunjuk+2);
    cout<<(penunjuk+2)<<"\n";
    
}