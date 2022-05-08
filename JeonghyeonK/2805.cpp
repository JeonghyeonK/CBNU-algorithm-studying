#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int N, M;
vector<int> tree;
int max_value = 0;
int min_value = 0;
int low_height, high_height, max_height = 0;

int func(int, int);

int main() {



	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		tree.push_back(a);
		max_value += a;
		if (a > max_height) max_height = a;
	}

	low_height = 0;
	high_height = max_height;

	if (M == 0) cout << "1000000000";
	else if (M == max_value) cout << 0;
	else {
		int b = func(high_height, low_height);
		cout << b;
	}
	

}

int func(int high_height, int low_height) {
	int value = 0;
	int average = (low_height + high_height) / 2;
	for (int i = 0; i < N; i++) {
		if (tree[i] > average) value += tree[i] - average;
	}
	if (value > M) low_height = average;
	else high_height = average;

	if (high_height - low_height == 1) return high_height;
	else return func(high_height, low_height);
}
