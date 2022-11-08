#include <iostream>

using namespace std;

//Die zwei Zahlen die berechnet werden sollen...
int gewünschtezahl1;
int gewünschtezahl2;

//Das ist die Summe aus den zwei gewünschten Zahlen...
int summe;

//Die Berechnung der zwei Zahlen ob es + / - / : / * genommmen werden soll...
char berechnung;


int main()
{
    cout << "Welcome to MrHarvey Rechner\n";
    cout << "Geben Sie die 1. Zahl ein\n";
    cin >> gewünschtezahl1;
    cout << "Waehlen sie aus (+ , - , / , *\n";
    cin >> berechnung;
    cout << "Geben Sie die 2. Zahl ein\n";
    cin >> gewünschtezahl2;
    if (berechnung == '+')
    {
            summe=gewünschtezahl1+gewünschtezahl2;
    }
    else if (berechnung == '-')
    {
        summe = gewünschtezahl1-gewünschtezahl2;
    }
    else if (berechnung == '/')
    {
        summe = gewünschtezahl1/gewünschtezahl2;
    }
    else if (berechnung == '*')
    {
        summe = gewünschtezahl1 * gewünschtezahl2;
    }
    cout << "Summe: " << summe;

}

