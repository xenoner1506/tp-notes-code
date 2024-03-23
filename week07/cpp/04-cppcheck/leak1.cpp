#include <iostream>

int main() {
    int *data = new int[10];
    for (size_t idx = 0; idx < 100; ++idx) {
        data[idx] = idx;
    }
}
