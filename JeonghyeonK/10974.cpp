#include <iostream>
#include <algorithm>

using namespace std;


int n = 0;
int a[8], b[8], v[8] = { 0 };

void cal(int);

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) a[i] = i + 1;
	cal(0);
}


void cal(int cnt) {
	if (cnt == n) {
		for (int i = 0; i < n; i++) cout << b[i] << ' ';
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (v[i]) continue;
		v[i] = 1;
		b[cnt] = a[i];
		cal(cnt + 1);
		v[i] = 0;
	}
}