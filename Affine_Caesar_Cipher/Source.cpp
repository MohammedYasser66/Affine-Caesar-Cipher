# include "stdio.h"
#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

auto key_init() {
    map <int, char> key;
    // inserting values 
    key.insert(pair<int, char>(0, 'A'));
    key.insert(pair<int, char>(1, 'B'));
    key.insert(pair<int, char>(2, 'C'));
    key.insert(pair<int, char>(3, 'D'));
    key.insert(pair<int, char>(4, 'E'));
    key.insert(pair<int, char>(5, 'F'));
    key.insert(pair<int, char>(6, 'G'));
    key.insert(pair<int, char>(7, 'H'));
    key.insert(pair<int, char>(8, 'I'));
    key.insert(pair<int, char>(9, 'J'));
    key.insert(pair<int, char>(10, 'K'));
    key.insert(pair<int, char>(11, 'L'));
    key.insert(pair<int, char>(12, 'M'));
    key.insert(pair<int, char>(13, 'N'));
    key.insert(pair<int, char>(14, 'O'));
    key.insert(pair<int, char>(15, 'P'));
    key.insert(pair<int, char>(16, 'Q'));
    key.insert(pair<int, char>(17, 'R'));
    key.insert(pair<int, char>(18, 'S'));
    key.insert(pair<int, char>(19, 'T'));
    key.insert(pair<int, char>(20, 'U'));
    key.insert(pair<int, char>(21, 'V'));
    key.insert(pair<int, char>(22, 'W'));
    key.insert(pair<int, char>(23, 'X'));
    key.insert(pair<int, char>(24, 'Y'));
    key.insert(pair<int, char>(25, 'Z'));

    return key;
}

auto Map_init() {
    map <char, int> alphabet;

    // inserting values 
    alphabet.insert(pair<char, int>('A', 0));
    alphabet.insert(pair<char, int>('B', 1));
    alphabet.insert(pair<char, int>('C', 2));
    alphabet.insert(pair<char, int>('D', 3));
    alphabet.insert(pair<char, int>('E', 4));
    alphabet.insert(pair<char, int>('F', 5));
    alphabet.insert(pair<char, int>('G', 6));
    alphabet.insert(pair<char, int>('H', 7));
    alphabet.insert(pair<char, int>('I', 8));
    alphabet.insert(pair<char, int>('J', 9));
    alphabet.insert(pair<char, int>('K', 10));
    alphabet.insert(pair<char, int>('L', 11));
    alphabet.insert(pair<char, int>('M', 12));
    alphabet.insert(pair<char, int>('N', 13));
    alphabet.insert(pair<char, int>('O', 14));
    alphabet.insert(pair<char, int>('P', 15));
    alphabet.insert(pair<char, int>('Q', 16));
    alphabet.insert(pair<char, int>('R', 17));
    alphabet.insert(pair<char, int>('S', 18));
    alphabet.insert(pair<char, int>('T', 19));
    alphabet.insert(pair<char, int>('U', 20));
    alphabet.insert(pair<char, int>('V', 21));
    alphabet.insert(pair<char, int>('W', 22));
    alphabet.insert(pair<char, int>('X', 23));
    alphabet.insert(pair<char, int>('Y', 24));
    alphabet.insert(pair<char, int>('Z', 25));

    alphabet.insert(pair<char, int>('a', 0));
    alphabet.insert(pair<char, int>('b', 1));
    alphabet.insert(pair<char, int>('c', 2));
    alphabet.insert(pair<char, int>('d', 3));
    alphabet.insert(pair<char, int>('e', 4));
    alphabet.insert(pair<char, int>('f', 5));
    alphabet.insert(pair<char, int>('g', 6));
    alphabet.insert(pair<char, int>('h', 7));
    alphabet.insert(pair<char, int>('i', 8));
    alphabet.insert(pair<char, int>('j', 9));
    alphabet.insert(pair<char, int>('k', 10));
    alphabet.insert(pair<char, int>('l', 11));
    alphabet.insert(pair<char, int>('m', 12));
    alphabet.insert(pair<char, int>('n', 13));
    alphabet.insert(pair<char, int>('o', 14));
    alphabet.insert(pair<char, int>('p', 15));
    alphabet.insert(pair<char, int>('q', 16));
    alphabet.insert(pair<char, int>('r', 17));
    alphabet.insert(pair<char, int>('s', 18));
    alphabet.insert(pair<char, int>('t', 19));
    alphabet.insert(pair<char, int>('u', 20));
    alphabet.insert(pair<char, int>('v', 21));
    alphabet.insert(pair<char, int>('w', 22));
    alphabet.insert(pair<char, int>('x', 23));
    alphabet.insert(pair<char, int>('y', 24));
    alphabet.insert(pair<char, int>('z', 25));


    return alphabet;
}



auto encrypt(string plain, int a, int b) {

    map <char, int> alphabet;
    alphabet = Map_init();
    map <int, char> keys;
    keys = key_init();
    int tmp;
    list<char> encrypted;

    //Encrypt
    for (int i = 0; i < plain.size(); i++)
    {
        if (plain[i] == ' ')
            encrypted.push_back(' ');

        if (isalpha(plain[i]))
        {
            tmp = alphabet.at(plain[i]);
            tmp = (tmp * a + b) % 26;
            encrypted.push_back(keys.at(tmp));
        }

    }

    //print the text
    list <char> ::iterator it;
    cout << "The Ciphertext: " << endl;
    for (auto const& i : encrypted) {
        std::cout << i << "";
    }
    cout << "\n";
}


void main()
{
    string plain;
    list<int> numbers;
    int a, b;

    cout << "Please enter the plaintext you want to encrypt.\n";
    char input[10000];
    cin.getline(input, sizeof(input));
    plain = input;

    cout << "Please enter the the 2 keys a,b respectively as in the affine Caesar of C=( aP + b ).\n";
    cin >> a >> b;

    encrypt(plain, a, b);

    system("pause");
}


