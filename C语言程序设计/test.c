#include <stdio.h>

long long fac(int n);

int main() {
    int n, r;
    scanf("%d,%d", &n, &r);
    if (n <= 0 || r <= 0 || n < r) {
        return 1;
    }
    long long result = fac(n) / (fac(r) * fac(n - r));
    printf("%lld\n", result);
    return 0;
}

long long fac(int n) {
    if (n <= 1)
    {
        return 1;
     }
    return n * fac(n - 1);
}