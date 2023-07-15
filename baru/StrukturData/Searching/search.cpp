#include <iostream>
using namespace std;

int search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 7, 5, 2, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Masukkan kunci: ";
    cin >> key;

    int result = search(arr, n, key);

    if (result == -1) {
        cout << "Elemen tidak ditemukan" << endl;
    } else {
        cout << "Elemen ditemukan pada indeks " << result << endl;
    }

    return 0;
}
