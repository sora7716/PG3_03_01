#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int>lst{ 1,2,3 };
	auto itr = lst.begin();//0�Ԗڂ̗v�f���w���C�e���[�^
	cout << *itr<<"\n";//itr��0�Ԗڂ̗v�f���w���Ă���̂�1��\��
	*itr = 9;//0�Ԗڂ̗v�f��9�ɕύX
	cout << *itr << "\n";//itr��0�Ԗڂ̗v�f���w���Ă���̂�9��\��
	itr++;
	*itr = 10;//1�Ԗڂ̗v�f��10�ɕύX
	cout << *itr << "\n" << "\n";//itr��1�Ԗڂ̗v�f���w���Ă���̂�10��\��
	lst.push_front(114);//�O�ɗv�f��ǉ�
	
	lst.push_back(225);//���ɗv�f��ǉ�

	//�v�f�����ׂĕ\��
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		cout << *itr << "\n";
	}

	return 0;
}