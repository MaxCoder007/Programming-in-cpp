#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str1 = "maxgemaximummass";
    cout << str1.find("mum") << endl;
    str1.erase(3, 15); // to erase string b/w any two index, we can use 
   
    cout << str1 << endl;
    str1.clear(); // to delete or clear a string
    if (str1.empty())
    { // to see string is empty or not
        cout << "string is empty" << endl;
    }
    else
    {
        cout << "String is not empty" << endl;
    }
}