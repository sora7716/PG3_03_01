#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int>list{ 1,3,5,7,10 };

	//�ŏ��̃��X�g
	cout << "�ǉ��O" << "\n";
	for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr) {
		cout << *itr << "\n";
	}
	cout << "==================================" << "\n";
	//�C�ӂ̏ꏊ�ɒl��ǉ�
	for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr) {
		
		if (*itr == 3) {
			itr = list.insert(itr,0);
			++itr;
        }
	}
	cout << "�ǉ���" << "\n";
	//�ǉ���̃��X�g
	for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr) {
		cout << *itr << "\n";
	}

	return 0;
}