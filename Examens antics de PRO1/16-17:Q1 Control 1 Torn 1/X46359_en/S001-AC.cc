#include <iostream>
using namespace std;

int extract_odd_digits(int x)
{
   if(x == 0) return 0;

   if((x % 10) % 2 == 1) return x % 10 + 10 * extract_odd_digits(x / 10);

   return extract_odd_digits(x / 10);
}

int main() {
    int N;
    int suma = 0;
    while (cin >> N) {
        suma += extract_odd_digits(N);
    }
    cout << suma << endl;
}