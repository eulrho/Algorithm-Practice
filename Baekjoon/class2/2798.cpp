// 블랙잭
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, sum, res=0;
    cin >> n >> m;

    vector<int> cards(n);
    for (int& c : cards) {
        cin >> c;
    }

    for (int i = 0; i < n-2; i++) {
        for (int j = i + 1; j < n-1; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = cards[i] + cards[j] + cards[k];
                if (sum <= m && m-sum < m-res) res = sum;
            }
        }
    }

    cout << res;

    return 0;
}