#include <iostream>
#include <list>
#include <string>
using namespace std;

void Printf(list <int> list,string label) {
	cout << label<<"\n";//label�̕�����\��
	for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr) {
		cout << *itr<<",";//list�����ׂĕ\��
	}
	cout << "\n";//���s
}

int main() {

	list<int> lst{ 3,1,4,1,5 };//���X�g�̐錾
	Printf(lst,"�폜�O");
	lst.pop_front();//�ŏ��̒l���폜
	Printf(lst, "�ŏ��̒l���폜");
	lst.pop_back();//�Ō�̒l���폜
	Printf(lst, "�Ō�̒l���폜");
	
	cout << "==================" << "\n";
	lst = { 1,2,3,4,5,6,7,8,9,0 };
	Printf(lst, "�V�������");
	auto itr = lst.begin();
	++itr;
	++itr;
	lst.erase(itr);//itr�Ԗڂ��폜
	Printf(lst, "itr�Ԗڂ��폜");
	return 0;
}