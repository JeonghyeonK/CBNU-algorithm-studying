#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	//��� �� �Է¹ޱ�
	int N;
	cin >> N;

	//������� �ɸ��� �ð� �Է¹ޱ�
	vector<int> array;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		array.push_back(a);
	}

	//�������� ����
	sort(array.rbegin(), array.rend());

	//�ð��� �� ����
	int time_sum = 0;

	//K���� �����ݾ��� ���鼭 ���� ����++
	for (int i = 1; i <= N; i++) {
		time_sum += array[i - 1] * i;
	}

	cout << time_sum;


	return 0;
}