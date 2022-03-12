#include <stdio.h>
static unsigned int x = 123456789, y = 987654321, z = 43219876,c = 6543217; /* Seed variables */
double JKISS() {
    unsigned long long t;
    x = 314527869 * x + 1234567;
    y ^= y << 5;
    y ^= y >> 7;
    y ^= y << 22;
    t = 4294584393ULL * z + c;
    c = t >> 32;
    z = t;
    double r = ((double) (x + y + z)) / 4294967296.0;
    return r;
}
int main() {
    double r[1000000];
    for (int i = 0; i < 1000000; i++) {
        r[i] = JKISS();
    }
    printf("%f\n", r[0]);
}
