#include<iostream>
using namespace std;

void ubah_nilai(int *x){
    *x=*x+1;
}
int main(){
    int a=5;
    cout<<"Nilai a awal = "<<a<<"\n";
    ubah_nilai(&a);
    cout<<"Nilai a terbaru = "<<a;
}