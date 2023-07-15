#include <iostream.h>

#include <conio.h>

void main () {

char a=*;

int f,i,c;

cout<<“masukan nilai tinggi:”;

cin>>f;

for(i=1; i<=f; i++){

cout<<a;

if(i==1)

for(c=1; c<=3; c++)

cout<<a;

if(i==3)

for(c=1; c<=3; c++)

cout<<a;

cout<<endl;

}

getch ();

}

2. Menampilkan Bilangan Ganjil

#include <iostream.h>

#include <conio.h>

int main (){

int a,b,i;

a=-1;

cout<<“bilangan ganjil (1_100) adalah:”<<endl;

for (i=1;i<=50;i++)

{

b=2+a;

cout<<b<<” “;

a=b;

}

getch ();

}