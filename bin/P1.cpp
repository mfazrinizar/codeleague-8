// Shanks Belanja - Code League #8 - P1

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
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;

#include <iostream>
#include <vector>
using namespace std;

int cekMin(int n) {
    vi deno = {100, 75, 50, 20, 10, 5, 2, 1};
    int count = 0;
    for (size_t i = 0; i < deno.size(); i++) {
        while (n >= deno[i]) {
            n -= deno[i];
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << cekMin(n);
    return 0;
}