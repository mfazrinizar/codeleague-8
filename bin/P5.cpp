// Ganesh dan Kereta Api - Code League #8 - P5

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

void reverseSajaMa(int N, vector<int>& in) {
    reverse(in.begin(), in.end());
    for (int i = 0; i < N; i++) {
        if (i != 0) {
            cout << ",";
        }
        cout << in[i];
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    vector<int> in(N);
    for (int i = 0; i < N; i++) {
        cin >> in[i];
    }
    reverseSajaMa(N, in);
    return 0;
}