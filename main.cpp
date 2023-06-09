#include <iostream>
#include <vector>
#include <cassert>

using std::vector;

int main() {
    vector<float> prices = { 2.5, 4.25, 3.0, 10.0 };
    vector<int> list = { 1, 1, 0, 3, 8 };
    float sum = 0;

    for (int i : list) {
        bool isItemValid = i >= 0 && i < prices.size();
        assert(isItemValid);
        if (isItemValid) {
            sum += prices[i];
        }
    }

    std::cout << sum << std::endl;
}