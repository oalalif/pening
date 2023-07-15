#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct jurusan {
    char nama[30];
    int nilai[4];
};

int main() {
    struct jurusan jur[5] = {
        {"1. Teknik Informatika", {75, 82, 78, 91}},
        {"2. Teknik Penerbangan", {99, 105, 100, 112}},
        {"3. Teknik Industri   ", {66, 70, 65, 75}},
        {"4. Teknik Elektro    ", {55, 55, 55, 65}},
        {"5. Teknik Mesin      ", {75, 65, 75, 85}}
    };

    printf("========================================================================\n");
    printf("| Jurusan               |   2014   |   2015   |  2016  |  2017  |\n");
    printf("========================================================================\n");
    for(int i=0; i<5; i++) {
        printf("| %-20s |  %2d      |  %2d      |  %2d    |  %2d    |\n",
               jur[i].nama, jur[i].nilai[0], jur[i].nilai[1], jur[i].nilai[2], jur[i].nilai[3]);
    }
    printf("========================================================================\n");

    return 0;
}
