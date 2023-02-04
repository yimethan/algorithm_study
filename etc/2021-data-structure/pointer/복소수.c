#include <stdio.h>

typedef struct {
    double real, imag;
} Complex;

Complex addComplex(Complex A, Complex B) {
    Complex res = {A.real+B.real, A.imag+B.imag};
    return res;
}

Complex minusComplex(Complex A, Complex B) {
    Complex res = {A.real - B.real, A.imag - B.imag};
    return res;
}

void printComplex(Complex C) {
    printf("%4.1f + %4.1fi\n", C.real, C.imag);
}

int main() {
    Complex a = {10.1, 7.9};
    Complex b = {-5.4, 7.3};

    Complex result = addComplex(a, b);
    printComplex(result);
    result = minusComplex(a, b); 
    printComplex(result);
}