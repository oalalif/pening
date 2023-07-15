#include <iostream>
#include <cstdlib>

using namespace std;

void clearScreen() {
    system("clear");
}

void displayMenu() {
    cout << "1. Tambah Antrian" << endl;
    cout << "2. Hapus Antrian" << endl;
    cout << "3. Lihat Antrian" << endl;
    cout << "4. Keluar" << endl;
    cout << "Silahkan masukkan pilihan" << endl;
}

void push(int data[], int& cek) {
    if (cek == 20)
        cout << "\nAntrian Penuh\n\n";
    else {
        int x;
        cout << "\nMasukkan nilai --> ";
        cin >> x;
        data[cek] = x;
        cek++;
    }
}

void pop(int data[], int& cek) {
    if (cek == 0)
        cout << "\nAntrian kosong\n\n";
    else {
        int hapus = data[0];
        for (int v = 0; v < cek; v++) {
            data[v] = data[v + 1];
            data[cek - 1] = 0;
            cek--;
        }
        cout << "\nData dengan nilai=" << hapus << " terhapus." << endl;
    }
    cin.ignore();
    cin.get();
}

void viewQueue(int data[], int cek) {
    if (cek == 0)
        cout << "\nAntrian Kosong." << endl;
    else {
        cout << endl;
        for (int z = 0; z < cek; z++) {
            cout << " | " << data[z] << " | ";
        }
    }
    cin.ignore();
    cin.get();
}

int main() {
    int cek = 0, data[20];
    char pil;
    
    do {
        clearScreen();
        displayMenu();
        cin >> pil;
        
        if (pil == '1') { // PUSH
            push(data, cek);
        } else if (pil == '2') { // POP
            pop(data, cek);
        } else if (pil == '3') { // LIHAT ANTRIAN
            viewQueue(data, cek);
        } else if (pil == '4') { // KELUAR
            break;
        } else { // PILIHAN SALAH
            clearScreen();
            cout << "Pilihan yang anda masukkan salah" << endl;
            cin.ignore();
            cin.get();
        }
    } while (true);

    return 0;
}


//modifikasi program dibawah jika user memilih selain 1-4 maka akan muncul pesan "Pilihan yang anda masukan salah", kemudian clear layar dan kembali ke tampilan awal