#include<iostream>
using namespace std;

int main(){
    char nama[]="Cah Ayu";
    char *p;
    
    
    p=nama;
    while (*p!=NULL){
        printf("%c",*p);
        p++;
    }
    cout<<"\n";
    
    
    p=&nama[0];
    while (*p!=NULL){
        printf("%c",*p);
        p++;
    }
    cout<<"\n";
    return 0;
}