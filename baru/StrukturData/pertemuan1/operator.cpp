#include <iostream>
using namespace std;
int main(){
    //operator aritmatika
    int a = 10;
    int b = 3;
    int c = a+b;
    int d = a-b;
    int j = a*b;
    double e =a/b;
    int f = a % b; //error note: kekurangan tanda sama dengan 
    int g = ++a;
    int h = --b;
    
    
    cout<<"Contoh penggunaan operator aritmatika \ndengan variabel a = 10 dan b = 3:\n";
    cout<<"---------------------------------------------\n";
    cout<<"a + b = "<<c<<"\n";
    cout<<"a - b = "<<d<<"\n";
    cout<<"a / b = "<<e<<"\n";
    cout<<"a * b = "<<j<<"\n";
    cout<<"a % b = "<<f<<"\n";
    cout<<"a++ = "<<g<<"\n";
    cout<<"b-- = "<<h<<"\n";
    
    //operator Assignment
    int x=4;
    cout<<"--------------------------------------------\n";
    cout<<"Contoh penggunaan operator aritmatika \ndengan variabel x = 4 :\n";
    cout<<"--------------------------------------------\n";
        cout<<"x=4 => "<<x<<"\n";
        x+=4;
        cout<<"nilai akhir x = 8, x+=4 => "<<x<<"\n";
        x-=4;
        cout<<"nilai akhir x = 8, x-=4 => "<<x<<"\n";
        x*=4;
        cout<<"nilai akhir x = 4, x*=4 => "<<x<<"\n";
        x/=4;
        cout<<"nilai akhir x = 16, x/=4 => "<<x<<"\n";
        x%=4;
        cout<<"nilai akhir x = 4, x%=4 => "<<x<<"\n";
        x&=4;
        cout<<"nilai akhir x = 1, x&=4 => "<<x<<"\n";
        x|=4;
        cout<<"nilai akhir x = 0, x|=4 => "<<x<<"\n";
        x^=4;
        cout<<"nilai akhir x = 0, x^=4 => "<<x<<"\n";
        x>>=4;
        cout<<"nilai akhir x = 4, x>>=4 => "<<x<<"\n";
        x<<=4;
        cout<<"nilai akhir x = 0, x<<=4 => "<<x<<"\n";
        
        //operator Comparison
        cout<<"---------------------------------------------\n";
        cout<<"Contoh penggunaan operator aritmatika \ndengan variabel a = 10 dan b = 3:\n";
        cout<<"---------------------------------------------\n";
        cout<<"Nilai (a==) ==> "<<(a==b)<<"\n";
        cout<<"Nilai (a!=) ==> "<<(a!=b)<<"\n";
        cout<<"Nilai (a<) ==> "<<(a<b)<<"\n";
        cout<<"Nilai (a>) ==> "<<(a>b)<<"\n";
        cout<<"Nilai (a<=) ==> "<<(a<=b)<<"\n";
        cout<<"Nilai (a>=) ==> "<<(a>=b)<<"\n";
        
        //operator Logikal
        cout<<"---------------------------------------------\n";
        cout<<"Contoh penggunaan operator aritmatika \ndengan variabel a = 10 dan b = 3:\n";
        cout<<"---------------------------------------------\n";
        cout<<"Nilai (a<20 && b>2) => "<<(a<20 && b>2)<<"\n";
        cout<<"Nilai (a<20 || b>2) => "<<(a<20 || b>2)<<"\n";
    return 0;  
}