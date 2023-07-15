#include <iostream>

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

void selection_sort() {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[min_idx])
                min_idx = j;
        }
        tukar(data[i], data[min_idx]);
        cout << "Data setelah iterasi ke-" << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl;
    }
    cout << "Selection Sort Selesai!" << endl;
}

void insertion_sort() {
    for (int i = 1; i < n; i++) {
        int key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
        cout << "Data setelah iterasi ke-" << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl;
    }
    cout << "Insertion Sort Selesai!" << endl;
}

void quick_sort(int low, int high) {
    if (low < high) {
        int pivot = data[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; j++) {
            if (data[j] < pivot) {
                i++;
                tukar(data[i], data[j]);
            }
        }
        tukar(data[i + 1], data[high]);
        cout << "Data setelah iterasi: ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl;
        quick_sort(low, i);
        quick_sort(i + 2, high);
    }
}

void input() {
    cout << "Masukkan jumlah data = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data ke-" << (i + 1) << " = ";
        cin >> data[i];
    }
}

void tampil_data() {
    cout << "Data: " << endl;
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main() {
    input();
    cout << "Data sebelum diurutkan: " << endl;
    tampil_data();

    bubble_sort();
    cout << "Data setelah diurutkan dengan Bubble Sort: " << endl;
    tampil_data();

    exchange_sort();
    cout << "Data setelah diurutkan dengan Exchange Sort: " << endl;
    tampil_data();

    selection_sort();
    cout << "Data setelah diurutkan dengan Selection Sort: " << endl;
    tampil_data();

    insertion_sort();
    cout << "Data setelah diurutkan dengan Insertion Sort: " << endl;
    tampil_data();

    quick_sort(0, n - 1);
    cout << "Data setelah diurutkan dengan Quick Sort: " << endl;
    tampil_data();

    return 0;
}

/*menambahkan proses sorting dengan metode selection, insertion, dan quick sort. Setiap iterasi dari setiap metode sorting akan menampilkan data saat itu. Harap diingat bahwa quick sort yang ditambahkan adalah versi sederhana dan tidak dioptimalkan.*/