#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

void searchArray(int arr[], int n, int key, int option) {
    int index;
    if (option == 1) {
        index = linearSearch(arr, n, key);
    } else if (option == 2) {
        index = binarySearch(arr, 0, n - 1, key);
    }

    if (index != -1) {
        cout << "Data " << key << " ditemukan pada index ke-" << index << endl;
    } else {
        cout << "Data tidak ditemukan dalam array" << endl;
    }
}

int main() {
    // Deklarasi variabel
    int A[10], i, k, option;

    // Proses penginputan data
    for (i = 0; i < 10; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> A[i];
    }

    // Memasukkan data yang akan dicari ke dalam k
    cout << "Masukkan data yang akan Anda cari: ";
    cin >> k;

    // Memilih model searching
    cout << "Pilih model searching:" << endl;
    cout << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl;
    cout << "Pilihan Anda: ";
    cin >> option;

    // Proses pencarian data
    searchArray(A, 10, k, option);

    return 0;
}

//dengan menggunakan fungsi, buatlah program untuk melakukan searching, dimana user dapat memilih model searching yang diinginkan