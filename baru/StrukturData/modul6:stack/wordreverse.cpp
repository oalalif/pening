#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseString(string str) {
    stack<char> s;
    string result = "";

    // Memasukkan karakter ke dalam tumpukan
    for (char c : str) {
        s.push(c);
    }

    // Mengambil karakter dari tumpukan untuk membalik kata
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }

    return result;
}

int main() {
    string input;

    // Menerima input kata
    cout << "Masukkan kata: ";
    cin >> input;

    // Memanggil fungsi untuk membalik kata
    string reversed = reverseString(input);

    // Menampilkan hasil
    cout << "Kata yang dibalik: " << reversed << endl;

    return 0;
}
