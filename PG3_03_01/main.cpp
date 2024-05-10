#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int>list{ 1,3,5,7,10 };

	//最初のリスト
	cout << "追加前" << "\n";
	for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr) {
		cout << *itr << "\n";
	}
	cout << "==================================" << "\n";
	//任意の場所に値を追加
	for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr) {
		
		if (*itr == 3) {
			itr = list.insert(itr,0);
			++itr;
        }
	}
	cout << "追加後" << "\n";
	//追加後のリスト
	for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr) {
		cout << *itr << "\n";
	}

	return 0;
}