#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int>lst{ 1,2,3 };
	auto itr = lst.begin();//0番目の要素を指すイテレータ
	cout << *itr<<"\n";//itrは0番目の要素を指しているので1を表示
	*itr = 9;//0番目の要素を9に変更
	cout << *itr << "\n";//itrは0番目の要素を指しているので9を表示
	itr++;
	*itr = 10;//1番目の要素を10に変更
	cout << *itr << "\n" << "\n";//itrは1番目の要素を指しているので10を表示
	lst.push_front(114);//前に要素を追加
	
	lst.push_back(225);//後ろに要素を追加

	//要素をすべて表示
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		cout << *itr << "\n";
	}

	return 0;
}