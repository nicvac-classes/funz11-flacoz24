#include <iostream>
using namespace std;
int main() {
    int b;
    string a;

    cout << "inserisci un budget iniziale :P" << endl;
    cin >> b;
    do {
        cout << "R (raccolta fondi) | P (previsione budget)| S (spesa imprevista) X (uscire) " << endl;
        cin >> a;
        if (a == "R") {
            b = (int) raccoltaF(b);
            cout << "dopo la raccolta fondi il budjet ammonta a:" << b << endl;
        } else {
            if (a == "P") {
            } else {
                if (a == "S") {
                    b = (int) spesab(b);
                    cout << "il budjet dopo la spesa imprevista ammonta a:" << b << endl;
                }
            }
        }
    } while (a != "X");
    cout << "grazie per aver dato i soldi per la gita" << endl;
    return 0;
}

double previsioneb(double prevPerc) {
    double livelloPrevPerc;

    if (livelloPrevPerc > 100) {
        livelloPrevPerc = 100;
        cout << "la previsione è superiore a quella possibile" << livelloPrevPerc << endl;
    } else {
        if (livelloPrevPerc < 0) {
            livelloPrevPerc = 0;
            cout << "la previsione è inferiore a quella possibile" << livelloPrevPerc << endl;
        }
    }
    
    return livelloPrevPerc;
}

double raccoltaF(double b) {
    double imp;

    imp = rand() % 1001;
    b = b + imp;
    
    return b;
}

double spesab(double b) {
    double imp;

    imp = rand() % 1001;
    if (b < 0) {
        b = 0;
        cout << "hai finito tutto il budjet che ora ammonta a 0" << endl;
    }
    
    return b;
}