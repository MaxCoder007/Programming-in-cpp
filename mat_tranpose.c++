#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mat[10][10], n, m, key;
    cout << "Enter order of the matrix";
    cin >> n >> m;
    if (m != n)
    {
        cout << "Transpose is not possible,its not a square matrix" << endl;
    }
    else
    {
        int temp;
        cout << "Enter the matrix";
        for (int i = 1; i<=n; i++)
        {
            for (int j = 1; j<= m; j++)
            {
                cin >> mat[i][j];
            }
        }
        for (int i = 1; i <=n; i++)
        {
            for (int j = i; j<=n; j++)
            {
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
        cout << "Enter the matrix"<<endl;
        for (int i = 1; i<=n; i++)
        {
            for (int j = 1; j<=m; j++)
            {
                cout<<" "<<mat[i][j];
            }
            cout<<"\n";
        }
    }
    
}