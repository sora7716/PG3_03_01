#include <iostream>
#include <list>
#include <string>
using namespace std;

void Printf(list <int> list,string label) {
	cout << label<<"\n";//labelの文字を表示
	for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr) {
		cout << *itr<<",";//listをすべて表示
	}
	cout << "\n";//改行
}

int main() {

	list<int> lst{ 3,1,4,1,5 };//リストの宣言
	Printf(lst,"削除前");
	lst.pop_front();//最初の値を削除
	Printf(lst, "最初の値を削除");
	lst.pop_back();//最後の値を削除
	Printf(lst, "最後の値を削除");
	
	cout << "==================" << "\n";
	lst = { 1,2,3,4,5,6,7,8,9,0 };
	Printf(lst, "新しく代入");
	auto itr = lst.begin();
	++itr;
	++itr;
	lst.erase(itr);//itr番目を削除
	Printf(lst, "itr番目を削除");
	return 0;
}