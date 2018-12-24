#include <iostream>
using namespace std;

int convert_to_odd_digits(int x)
{
   if(x == 0) return 0;

   if(x % 2 == 0) return (x % 10) + 1 + 10 * convert_to_odd_digits(x / 10);

   return (x % 10) + 10 * convert_to_odd_digits(x / 10);
}

int main() {
    int n;
    int max = 0;
    while (cin >> n) {
        int v = convert_to_odd_digits(n);
        if (v > max) max = v;
    }
    cout << max << endl;
}