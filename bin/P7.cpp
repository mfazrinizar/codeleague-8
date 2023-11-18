// Tugas Anya - Code League #8 - P7

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
#include <algorithm>
#include <string>
using namespace std;

int jumlahHuruf(string s, char ch) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    ch = tolower(ch);
    int count = 0;
    for (char c : s) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    char ch;
    getline(cin, s);
    cin >> ch;
    cout << jumlahHuruf(s, ch) << endl;
    return 0;
}