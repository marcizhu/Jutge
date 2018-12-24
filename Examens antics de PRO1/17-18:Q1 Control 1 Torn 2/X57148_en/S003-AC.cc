#include <iostream>
using namespace std;

int main ()
{
    int x1, x2, x3;

    cin >> x1 >> x2 >> x3;

    if ((x1 % 10 == x1 / 100) and (x2 % 10 == x2 / 100) and (x3 % 10 == x3 / 100))
    {
        if (x1 % 10 < x2 % 10 and x2 % 10 < x3 % 10) cout << "3-Increasing" << endl;
        else if (x1 % 10 > x2 % 10 and x2 % 10 > x3 % 10) cout << "3-Decreasing" << endl;
        else cout << "Nothing" << endl;
    }
    else
    {
    	cout << "Nothing" << endl;
	}
}