#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int  sum = 0, original = n;
    while (n > 0) {
        int q;
        q = n % 10;
        sum =sum+(q*q*q);
        n = n / 10;
    }

    if (sum == original) {
        cout << "This number is an Armstrong number." << endl;
    } else {
        cout << "This number is not an Armstrong number." << endl;
    }

    return 0;
}
