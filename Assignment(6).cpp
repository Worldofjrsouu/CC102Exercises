// MANOGURA, JAY JASPER N.
// BSCS-1B


#include <iostream>
#include <fstream>
using namespace std;


 bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

  int main() {


    ifstream file("NUMS.TXT");

    if (!file.is_open()) {
        cout << "Error Cannot open file!" << endl;
        return 1;
    }

    int num;
    int primeCount = 0;


    while (file >> num) {
        if (isPrime(num)) {
            primeCount++;
        }
    }

    file.close();

    cout << "Number of prime numbers: " << primeCount << endl;

    return 0;
}
