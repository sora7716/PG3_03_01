#include <cstdio>
#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
#pragma region vector�̎g����
	//int�^�̉ϒ��z�� e(�v�f��:3)
	vector<int> e = { 1,2,3 };

	//int�^�̉ϒ��z��p�̃C�e���[�^
	vector<int>::iterator it;

    //e�̐퓬�v�f������
	it = e.begin();

	//it�������Ă���v�f��\��
	cout << *it << endl;

	//���̗v�f�Ɉړ�
	it++;

	//it���w���Ă���v�f��\��
	cout << *it << endl;
#pragma endregion

#pragma region �v�f�̍폜
	/*�v�f�̍폜*/

	//int�^�̉ϒ��z�� e (�v�f��:3)
	vector<int>g = { 1,2,3 };

	//�Y��1�̗v�f���폜{1,3}
	g.erase(g.begin() + 1);
	cout << ("%d", g[2]) << endl;
	//�����̗v�f���폜
	g.pop_back();
#pragma endregion

	return 0;
}