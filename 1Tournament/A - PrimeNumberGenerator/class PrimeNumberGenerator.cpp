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
