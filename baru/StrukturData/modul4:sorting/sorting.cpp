#include <iostream>
#include <cstdio>

using namespace std;

int data[100];
int n;

void tukar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1])
                tukar(data[j], data[j + 1]);
        }
    }
    cout << "Bubble Sort Selesai!" << endl;
}

void exchange_sort() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i] > data[j])
                tukar(data[i], data[j]);
        }
    }
    cout << "Exchange Sort Selesai!" << endl;
}

void Input() {
    cout << "Masukkan jumlah data = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data ke-" << (i + 1) << " = ";
        cin >> data[i];
    }
}

void Tampil() {
    cout << "Data: " << endl;
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main() {
    Input();
    cout << "Data sebelum diurutkan: " << endl;
    Tampil();

    bubble_sort();
    cout << "Data setelah diurutkan dengan Bubble Sort: " << endl;
    Tampil();

    exchange_sort();
    cout << "Data setelah diurutkan dengan Exchange Sort: " << endl;
    Tampil();

    getchar();
    return 0;
}
