#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int countpunct = 0;
    char word;

    cout << "\nMasukkan Kalimat : ";

    while ((word = getchar()) != EOF && word != '\n') {
        if (word == '.' || word == '?' || word == '!' ||
            word == '(' || word == ')' || word == '*' || word == '&') {
            countpunct++;
        }
    }

    cout << "\nJumlah Tanda Baca  : " << countpunct;

    _getch();
    return 0;
}