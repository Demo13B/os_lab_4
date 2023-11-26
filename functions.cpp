#include "functions.hpp"
#include <string.h>
#include <iostream>

float square_1(float A, float B) {
    return A * B;
}

float square_2(float A, float B) {
    return A * B / 2;
}

char* translation_1(long x) {
    char* num = new char[1000];
    char* rev = new char[1000];
    size_t i = 0;
    while (x != 0) {
        int digit = x % 2;
        rev[i] = digit + 48;
        x /= 2;
        ++i;
    }

    for (size_t j = 0; j != i; ++j) {
        num[j] = rev[i - j - 1];
    }

    delete[] rev;

    return num;
}

char* translation_2(long x) {
    char* num = new char[1000];
    char* rev = new char[1000];
    size_t i = 0;
    while (x != 0) {
        int digit = x % 3;
        rev[i] = digit + 48;
        x /= 3;
        ++i;
    }

    for (size_t j = 0; j != i; ++j) {
        num[j] = rev[i - j - 1];
    }

    delete[] rev;

    return num;
}