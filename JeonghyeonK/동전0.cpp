#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	//���� ����, �ݾ� �Է¹ޱ�
	int N, K;
	cin >> N;
	cin >> K;

	//������ ��¥���� �Է¹ޱ�
	vector<int> array;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		array.push_back(a);
	}

	//�������� ����
	sort(array.rbegin(), array.rend());

	//���� ���� ����
	int coin_num = 0;

	//K���� �����ݾ��� ���鼭 ���� ����++
	for (int i = 0; K > 0; i++) {
		while (K >= array[i]) {
			K -= array[i];
			coin_num++;
		}
	}

	cout << coin_num;


	return 0;
}