#include <iostream>
#include <biginteger.cpp>
#include <init.cpp>
using namespace std;

int main(int argc, char *argv[]) {

    // иницилизация программы
    if (!init(argc, argv)) { cout << "неверные входные параметры \n"; return 0; }

    // исходное нат. число
    BigInteger n(argv[2]);
    BigInteger q = n.sqrt() + 1;

    // вероятность того,
    // что число простое
    bool prm = true;

    // исключаем первые простые числа до 1 млрд.
    if (n < 999999999 && n > 1) {

        for (BigInteger i = 2; i <= q; i++)
        if (n % i == 0) { prm = false; break; }

        if (prm) { cout << "число является простым \n"; return 0; }
        else { cout << "число не является простым \n"; return 0; }

    } else if (n == 0 || n == 1)
    { cout << "число не является простым \n"; return 0; }

    if (n < 9999999999999999999) {

        // выбирается некоторое число m,
        // равное произведению простых чисел без степеней
        // и рассматриваются только те элементы множества {2,3,...,q = sqrt{n}},
        // которые взаимно просты с m

        int m = 210;

        // m = 210 = 2*3*5*7
        // p[0] - первое простое число в промежутке [210..420]
        // p[35] - последнее простое число в промежутке [210..420]
        BigInteger p[36] = {
            211, 223, 227, 229, 233, 239, 241, 251, 257, 263,
            269, 271, 277, 281, 283, 293, 307, 311, 313, 317,
            331, 337, 347, 349, 353, 359, 367, 373, 379, 383,
            389, 397, 397, 401, 409, 419
        };

        while ( p[35] <= q     &&
                n % p[0] != 0  &&
                n % p[1] != 0  &&
                n % p[2] != 0  &&
                n % p[3] != 0  &&
                n % p[4] != 0  &&
                n % p[5] != 0  &&
                n % p[6] != 0  &&
                n % p[7] != 0  &&
                n % p[8] != 0  &&
                n % p[9] != 0  &&
                n % p[10] != 0 &&
                n % p[11] != 0 &&
                n % p[12] != 0 &&
                n % p[13] != 0 &&
                n % p[14] != 0 &&
                n % p[15] != 0 &&
                n % p[16] != 0 &&
                n % p[17] != 0 &&
                n % p[18] != 0 &&
                n % p[19] != 0 &&
                n % p[20] != 0 &&
                n % p[21] != 0 &&
                n % p[22] != 0 &&
                n % p[23] != 0 &&
                n % p[24] != 0 &&
                n % p[25] != 0 &&
                n % p[26] != 0 &&
                n % p[27] != 0 &&
                n % p[28] != 0 &&
                n % p[29] != 0 &&
                n % p[30] != 0 &&
                n % p[31] != 0 &&
                n % p[32] != 0 &&
                n % p[33] != 0 &&
                n % p[34] != 0 &&
                n % p[35] != 0
        ) {
                p[0] += m;
                p[1] += m;
                p[2] += m;
                p[3] += m;
                p[4] += m;
                p[5] += m;
                p[6] += m;
                p[7] += m;
                p[8] += m;
                p[9] += m;
                p[10] += m;
                p[11] += m;
                p[12] += m;
                p[13] += m;
                p[14] += m;
                p[15] += m;
                p[16] += m;
                p[17] += m;
                p[18] += m;
                p[19] += m;
                p[20] += m;
                p[21] += m;
                p[22] += m;
                p[23] += m;
                p[24] += m;
                p[25] += m;
                p[26] += m;
                p[27] += m;
                p[28] += m;
                p[29] += m;
                p[30] += m;
                p[31] += m;
                p[32] += m;
                p[33] += m;
                p[34] += m;
                p[35] += m;
        }

        if (  p[35] <= q                    ||
              p[0] <= q  && n % p[0] == 0   ||
              p[1] <= q  && n % p[1] == 0   ||
              p[2] <= q  && n % p[2] == 0   ||
              p[3] <= q  && n % p[3] == 0   ||
              p[4] <= q  && n % p[4] == 0   ||
              p[5] <= q  && n % p[5] == 0   ||
              p[6] <= q  && n % p[6] == 0   ||
              p[7] <= q  && n % p[7] == 0   ||
              p[8] <= q  && n % p[8] == 0   ||
              p[9] <= q  && n % p[9] == 0   ||
              p[10] <= q  && n % p[10] == 0 ||
              p[11] <= q  && n % p[11] == 0 ||
              p[12] <= q  && n % p[12] == 0 ||
              p[13] <= q  && n % p[13] == 0 ||
              p[14] <= q  && n % p[14] == 0 ||
              p[15] <= q  && n % p[15] == 0 ||
              p[16] <= q  && n % p[16] == 0 ||
              p[17] <= q  && n % p[17] == 0 ||
              p[18] <= q  && n % p[18] == 0 ||
              p[19] <= q  && n % p[19] == 0 ||
              p[20] <= q  && n % p[20] == 0 ||
              p[21] <= q  && n % p[21] == 0 ||
              p[22] <= q  && n % p[22] == 0 ||
              p[23] <= q  && n % p[23] == 0 ||
              p[24] <= q  && n % p[24] == 0 ||
              p[25] <= q  && n % p[25] == 0 ||
              p[26] <= q  && n % p[26] == 0 ||
              p[27] <= q  && n % p[27] == 0 ||
              p[28] <= q  && n % p[28] == 0 ||
              p[29] <= q  && n % p[29] == 0 ||
              p[30] <= q  && n % p[30] == 0 ||
              p[31] <= q  && n % p[31] == 0 ||
              p[32] <= q  && n % p[32] == 0 ||
              p[33] <= q  && n % p[33] == 0 ||
              p[34] <= q  && n % p[34] == 0
        ) prm = false;


    } else {

        // для больших чисел трудные вычисления
        // поэтому выбираем m = 30

        int m = 30;

        // m = 210 = 2*3*5
        // p[0] - первое простое число в промежутке [30..60]
        // p[7] - последнее простое число в промежутке [30..60]
        BigInteger p[8] = {
            31, 37, 41, 43, 51, 53, 57, 59
        };


        while ( p[7] <= q     &&
                n % p[0] != 0  &&
                n % p[1] != 0  &&
                n % p[2] != 0  &&
                n % p[3] != 0  &&
                n % p[4] != 0  &&
                n % p[5] != 0  &&
                n % p[6] != 0  &&
                n % p[7] != 0
        ) {
                p[0] += m;
                p[1] += m;
                p[2] += m;
                p[3] += m;
                p[4] += m;
                p[5] += m;
                p[6] += m;
                p[7] += m;

        }

        if (  p[7] <= q                     ||
              p[0] <= q  && n % p[0] == 0   ||
              p[1] <= q  && n % p[1] == 0   ||
              p[2] <= q  && n % p[2] == 0   ||
              p[3] <= q  && n % p[3] == 0   ||
              p[4] <= q  && n % p[4] == 0   ||
              p[5] <= q  && n % p[5] == 0   ||
              p[6] <= q  && n % p[6] == 0
        ) prm = false;



    }


    if (prm) cout << "число является простым \n";
    else cout << "число не является простым \n";

    return 0;
}
