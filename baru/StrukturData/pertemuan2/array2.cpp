#include <iostream>


using namespace std;

int main () {
    int tabel[3][4];


    for (int row=0;row<3;row++){
        for  (int col=0;col<4;col++){
            cout<<"tabel["<<row<<"] ["<<col<<"]= ";
            cin>>tabel[row][col];
        }
        cout<<"\n";
    }
    
    
    for(int row =0 ; row<3; row++) {
        for(int col=0;col<4;col++){
            cout<<tabel[row][col]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}