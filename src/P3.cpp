// Permainan Shinobi - Code League #8 - P3

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
using namespace std;

string pemenang(int kunai) {
    return kunai % 6 == 0 ? "KAKASHI" : "GUY";
}

vs eksekGame(vi ronde) {
    vs winners;
    for (int kunai : ronde) {
        winners.push_back(pemenang(kunai));
    }
    return winners;
}

vi getInput(int r) {
    vi ronde(r);
    for (int i = 0; i < r; i++) {
        cin >> ronde[i];
    }
    return ronde;
}

int main() {
    int r;
    cin >> r;
    vi ronde = getInput(r);
    vs winners = eksekGame(ronde);
    for (string winner : winners) {
        cout << winner << endl;
    }
    return 0;
}