// Natan Bermuka Matriks 2 Dimensi - Code League #8 - P8

// #include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define ROF(i, start, end) for(int i = end; i > start; i--)
#define FORO(i, end) for(int i = 0; i < end; i++)
#define ROFO(i, start) for(int i = start; i >= 0; i--)
#define pub push_back
#define fir first
#define sec second
#define pob pop_back
#define mp make_pair
#define read_arr(arr, start, end) for (int i = start; i < end; i++) { cin >> arr[i]; }
#define vi vector<int>
#define vii vector<vector<int>>
#define vl vector<long>
#define vs vector<string>
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n <= 0 || m <= 0) {
        cout << "Ukuran tidak valid" << endl;
        return 0;
    }

    vii mat(n, vi(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(mat[i].begin(), mat[i].end());
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}