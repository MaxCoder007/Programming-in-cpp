#include <bits/stdc++.h>
using namespace std;

bool issafe(int **arr, int x, int y, int n) {
    // Check column
    for (int row = 0; row < x; row++) {
        if (arr[row][y] == 1) {
            return false;
        }
    }

    // Check left diagonal
    int row = x, col = y;
    while (row >= 0 && col >= 0) {
        if (arr[row][col] == 1) {
            return false;
        }
        row--;
        col--;
    }

    // Check right diagonal
    row = x, col = y;  // Reset to original position
    while (row >= 0 && col < n) {
        if (arr[row][col] == 1) {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool nqueen(int **arr, int x, int n) {
    if (x >= n) {                  // Base case: all queens are placed
        return true;              
    }

    for (int col = 0; col < n; col++) {  
        if (issafe(arr, x, col, n)) {   // Check if position is safe
            arr[x][col] = 1;            // Place the queen
            
            if (nqueen(arr, x + 1, n)) { // Recursively place the next queen
                return true;             // Solution found
            }

            arr[x][col] = 0;            // Backtrack if no solution
        }
    }

    return false;                       // No valid placement for this row
}

int main() {
    int n = 4;  // Change this value for different board sizes
    int **arr = new int *[n];

    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
        fill(arr[i], arr[i] + n, 0);  // Initialize with zeros
    }

    if (nqueen(arr, 0, n)) {
        cout << "Solution:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists\n";
    }

    
    return 0;
}
