// Mathematics
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, num, res=0;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> num;
		res += num;
	}
	cout << res;
	return (0);
}