#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	//���� ���� �Է¹ޱ�
	int N;
	cin >> N;

	//������ �߷� �Է¹ޱ�
	vector<int> array;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		array.push_back(a);
	}

	//�������� ����
	sort(array.rbegin(), array.rend());

	//�߷� �� ���� �ִ� ����
	int max_sum = 0;
	
	//vector ���� �ϳ��� ��ġ�鼭 �ִ밪 ã��
	for (int i = 0; i < N; i++) {
		int sum = array[i] * (i + 1);
		max_sum = max(max_sum, sum);
	}

	cout << max_sum;


	return 0;
}