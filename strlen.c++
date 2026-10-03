#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    //cin >> n;
  //  cin.ignore();
    char arr[100];
    cin.getline(arr,100);
   // cin.ignore();
    int i = 0;
    int maxlen = 0, curlen = 0;
    int str = 0, stmax=0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curlen > maxlen)
            {
                maxlen = curlen;
                stmax = str;
            }
            curlen = 0;
            str = i + 1;
        }
        else
        {
            curlen++;
        }
        if (arr[i] =='\0')
        {
            break;
        }
        i++;
    }
    cout << maxlen << endl;
    for (i = 0; i <maxlen; i++)
    {
        cout << arr[stmax+i];
    }

    cout<<endl;
}