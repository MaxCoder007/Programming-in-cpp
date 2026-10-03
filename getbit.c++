#include <bits/stdc++.h>
using namespace std;
int getbit(int n, int poss)
{
    return ((n & (1 << poss)) != 0); // to check which bit is present in the binary sequency like 0 or 1
}
int setbit(int n, int poss)
{
    return ((n | (1 << poss))); // to set 1 in the given position in a binary system
}
int clearbit(int n, int poss)
{
    int mask = ~(1 << poss); // to remove 1 from the given position
    return (n & mask);
}
int updatebit(int n, int poss, int value)
{
    int mask = ~(1 << poss);
    n = n & mask;// to set  0 in the given position
    return (n | (value << poss));
}
int main()
{
    //  cout<<getbit(1,0)<<endl;
    // cout<<setbit(5,1)<<endl;
    // cout<<clearbit(5,2)<<endl;
    cout << updatebit(7,2,1) << endl;
}