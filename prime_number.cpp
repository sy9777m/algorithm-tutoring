#include <iostream>

int main() {
    int num[1000];
    int i = 0;
    for (i = 0; i < 1000; ++i) {
        num[i] = i + 2;
    }

    int length = (int)(sizeof(num) / sizeof(int));
    bool isPrime[length];

    for (i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            if (num[i] % num[j] == 0) {
                isPrime[i] = false;
                break;
            }
            else {
                isPrime[i] = true;
                continue;
            }
        }
    }

    int prime[length];
    int j = 0;
    for (i = 0; i < length; ++i) {
        if (isPrime[i]) {
            prime[j] = num[i];
            ++j;
        }
    }

    for (i = 0; i < j; ++i) {
        std::cout << prime[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}