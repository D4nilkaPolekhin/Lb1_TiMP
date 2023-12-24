#ifndef TABLETRANSPOSITIONCIPHER_H
#define TABLETRANSPOSITIONCIPHER_H

#include <string>

class TableTranspositionCipher {
public:
    TableTranspositionCipher(int numColumns);

    std::string encrypt(const std::string& plaintext);
    std::string decrypt(const std::string& ciphertext);

private:
    int numColumns;
};

#endif