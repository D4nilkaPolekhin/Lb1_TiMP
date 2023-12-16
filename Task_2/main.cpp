#include <stdio.h>
#include <iostream>
#include <string>
#include "/home/stud/C++Projects/Lb_TiMP/Lb_TiMP/Chifr.h"
using namespace std;

string encrypt(string in, const int kluch);
string decrypt(string in, const int kluch);

int main(int argc, char **argv)
{
    chifr enc;
    int COLS = 10;

    string public_message = "GERALTISRIVII";
    string privat_message = enc.encrypt(public_message, COLS);
    string decode_message = enc.decrypt(privat_message, COLS);

    cout << "Столбцы = " << COLS << endl;
    cout << public_message << endl;
    cout << privat_message << endl;
    cout << decode_message << endl;

    return 0;
}