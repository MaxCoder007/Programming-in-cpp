#include <bits/stdc++.h>
using namespace std;

int hextodec(string n);
int main()
{
    string n;
    cin >> n;
    cout << hextodec(n);
}
int hextodec(string n)
{
    int x = 1, y, ans = 0, m = 0;
    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        
            {
                ans += x * (n[i]-'0');//n[i] - '0' → Converts character digits (0-9) to their integer values.
            }
            if (n[i] >= 'A' && n[i] <='F')
            {
                ans += x * (n[i] - 'A' + 10);//n[i] - 'A' + 10 → Converts uppercase hex digits (A-F) to decimal values (10-15).
            }
            x*=16;
    }
        return (ans);
    
}
