#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int now_index = 0;  // Ž���ϰ� �ִ� ������ �ε���

    while (1) {
        int max_prior = 0; // priorities���� �ִ밪�� ã�� ���� ����
        int max_index = 0; // ã�� �ִ밪�� �ε����� ����

        for (int i = 0; i < (int)priorities.size(); i++) {

            // ���� ���� �ִ밪���� ũ�� �ִ밪 ����
            if (max_prior < priorities[now_index]) {
                max_prior = priorities[now_index];
                max_index = now_index;
            }

            //�� ĭ�� �̵��ϸ鼭 �ִ밪�� ã�ٰ� �ε����� ���� �Ѿ�� ù��° �ε����� �̵�
            now_index++;
            if (now_index == priorities.size()) now_index = 0;
        }

        //ã�� �ִ밪�� �ε����� ���� �μ⸦ ��û�� ������ �ε����� �ƴ� ���
        if (max_index != location) {
            priorities.erase(priorities.begin() + max_index);   // �ִ밪 ���Ҹ� ���Ϳ��� ����
            if (max_index < location) location--;   // location ��ġ�� ���� ����

            //���� �ִ밪 ������ ���� ���Һ��� �ٽ� �ѹ��� Ž��
            if (max_index == priorities.size()) now_index = 0;
            else now_index = max_index;

            answer++; //�ִ밪 ã�� ������ �� ���� answer++
        }

        //ã�� �ִ밪�� �ε����� ���� �μ⸦ ��û�� ������ �ε����� �´ٸ� while�� Ż��
        else break;

    }

    return answer + 1;
}