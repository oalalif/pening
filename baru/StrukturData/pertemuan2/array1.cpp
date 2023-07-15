#include <iostream>
using namespace std;
int main(){
    int y [] = {11, 21, 71, 41, 51};
    int r=0;
    
    for ( int n=0;n<5;n++){
        r += y[n];
    }
    cout<<" "<<r;
    return 0;
}