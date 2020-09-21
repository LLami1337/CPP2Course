#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <functional>
#include <set>
#include <queue>
#include <string>
#include <map>
#include <iomanip>
#include <sstream>
#include <cassert>


class PrimeNumberGenerator {

public:
    int start;
    explicit PrimeNumberGenerator(int startNumber) {
        start = startNumber;
    }

    int GetNextPrime() {
        while (CheckPrime(start) == false) {
            start++;
        }
        int res = start;
        start++;
        return res;
    }

    bool CheckPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
        
    }

};

int main() {

    int start, num;
    std::cin >> start >> num;
    PrimeNumberGenerator gen(start);
    for (int i = 0; i < num; ++i) {
        std::cout << gen.GetNextPrime() << " ";
    }
}
