#include <cstdio>
#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
#pragma region vectorの使い方
	//int型の可変長配列 e(要素数:3)
	vector<int> e = { 1,2,3 };

	//int型の可変長配列用のイテレータ
	vector<int>::iterator it;

    //eの戦闘要素を示す
	it = e.begin();

	//itがさしている要素を表示
	cout << *it << endl;

	//次の要素に移動
	it++;

	//itが指している要素を表示
	cout << *it << endl;
#pragma endregion

#pragma region 要素の削除
	/*要素の削除*/

	//int型の可変長配列 e (要素数:3)
	vector<int>g = { 1,2,3 };

	//添字1の要素を削除{1,3}
	g.erase(g.begin() + 1);
	cout << ("%d", g[2]) << endl;
	//末尾の要素を削除
	g.pop_back();
#pragma endregion

	return 0;
}