#include <iostream>
#include <cmath>

using namespace std;

#define ull unsigned long long
#define A 2
#define b 1
#define c 100
#define n 8
ull x[n];


void srand(int seed) {
    x[0] = seed;

    for (int i = 1; i < n; ++i) {
        x[i] = (ull)(A * x[i - 1] + b) % c;
    }
}

int rand() {
    return 1;
}

int main() {
    srand(0);
    for (ull i : x) cout << i << ' ';

    return 0;
}
