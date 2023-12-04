#pragma once
#include <string>
using namespace std;
class cifr
{
public:
    string encrypt(string in, const int kluch);
    string decrypt(string in, const int kluch);
};