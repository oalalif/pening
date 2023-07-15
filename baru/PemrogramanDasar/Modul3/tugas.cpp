#include <iostream>
#include <string>

int main() {
    std::string perguruanTinggiDahulu = "STTA";
    std::string perguruanTinggiSekarang = "ITD Adisutjipto";

    // Pointer yang menunjuk ke variabel perguruanTinggiDahulu
    std::string* ptrPerguruanTinggiDahulu = &perguruanTinggiDahulu;

    // Mengubah nilai yang ditunjuk oleh pointer ptrPerguruanTinggiDahulu
    *ptrPerguruanTinggiDahulu = "STTA";

    std::cout << "Nama Perguruan Tinggi Dahulu = " << *ptrPerguruanTinggiDahulu << std::endl;
    std::cout << "Nama Perguruan Tinggi Sekarang = " << perguruanTinggiSekarang << std::endl;

    return 0;
}