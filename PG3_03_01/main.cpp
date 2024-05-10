#include <cstdio>
#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector<string> f = { "ローソン","ファミマ","セブン" };
	for (vector<string>::iterator it_f = f.begin(); it_f != f.end(); it_f++) {

		cout << *it_f << endl;

	}


	return 0;
}