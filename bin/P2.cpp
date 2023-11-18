// Kegabutan Yelan dan Shenhe - Code League #8 - P2

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

string pemenang(string yelanMove, string shenheMove) {
    if (yelanMove == shenheMove) return "Draw";
    if ((yelanMove == "batu" && shenheMove == "gunting") || 
        (yelanMove == "gunting" && shenheMove == "kertas") || 
        (yelanMove == "kertas" && shenheMove == "batu")) return "Yelan";
    return "Shenhe";
}

void eksekGame(vs jalan) {
    int skorYelan = 0, skorShenhe = 0;
    for (size_t i = 0; i < jalan.size(); i += 2) {
        string winner = pemenang(jalan[i], jalan[i+1]);
        if (winner == "Yelan") skorYelan++;
        else if (winner == "Shenhe") skorShenhe++;
    }

    if (skorYelan > skorShenhe) cout << "Yelan menang";
    else if (skorShenhe > skorYelan) cout << "Shenhe menang";
    else cout << "Draw";
}

vs getInput(int n) {
    vs jalan(n);
    for (int i = 0; i < n; i++) {
        cin >> jalan[i];
    }
    return jalan;
}

int main() {
    int n;
    cin >> n;
    vs jalan = getInput(n);
    eksekGame(jalan);
    return 0;
}