#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main() {

	//��� �� �Է¹ޱ�
	int N;
	cin >> N;

	//ȸ�� ���� �ð�, ������ �ð� ���� pair vector �����ϰ� �Է¹ޱ�
	vector<pair<int, int>> array;
	for (int i = 0; i < N; i++) {
		int start, end;
		cin >> start >> end;
		array.push_back(pair<int, int>(end, start));
	}

	//�������� ���� (ȸ�� ���� �ð��� ���� ������, ���� ��� ���� �ð��� ���� ��)
	sort(array.begin(), array.end());

	//ȸ�ǰ� ������ �ð� ����
	int breaktime = array[0].first;

	//ȸ�� ���� ����
	int conference = 1;

	//ȸ�ǽð��� ��ġ�� �ʴ� ȸ�ǵ� �� ������ �ð��� ���� ���� �켱���� ��� ����
	for (int i = 1; i < N; i++) {
		if (array[i].first >= breaktime) {
			if (array[i].second >= breaktime) {
				breaktime = array[i].first;
				conference++;
			}
		}
	}



	cout << conference;


	return 0;
}