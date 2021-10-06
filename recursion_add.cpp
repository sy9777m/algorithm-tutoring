#include <iostream>

int recursion_add(int n) {
    int count = 0;
    if (n < 0) {
        return count;
    }
    else if (n == 0) {
        return ++count;
    }
    else {
        int a;
        for (a = 1; a <= 3; ++a) {
            count += recursion_add(n - a);
        }

        return count;
    }
}

int main(void) {
    int T, n;
    std::cin >> T;

    int i;
    for (i = 0; i < T; i++) {
        std::cin >> n;
        std::cout << recursion_add(n) << "\n";
    }

    return 0;
}