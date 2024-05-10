#include <iostream>
#include <cstdio>
#include<list>
using namespace std;

/// <summary>
/// リストの表示
/// </summary>
/// <param name="lst">表示したいリスト</param>
/// <param name="label">リストのラベル</param>
void Printf(list<const char*>lst, const char* label) {
	cout <<"\n" << label << "\n";//ラベルの表示
	int lineBreakManager = 0;//改行を管理する変数
	//リストの中身を表示
	for (list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		cout << *itr<<",";//駅の名前を表示
		lineBreakManager++;//改行するまでのカウント
		if (lineBreakManager == 5) {//カウントが5に行ったら改行
			cout <<"\n";
			lineBreakManager = 0;//カウントを0に初期化
		}
	}
}

/// <summary>
/// リストに追加して表示
/// </summary>
/// <param name="lst">対象となるリスト</param>
/// <param name="prevName">追加したい場所の前にいる物の名前</param>
/// <param name="additionName">追加したいものの名前</param>
/// <param name="label">リストのラベル</param>
void addition(list<const char*>&lst,const char* nextName,const char* additionName,const char*label) {
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == nextName) {
			itr = lst.insert(itr, additionName);//リストに追加
			break;
		}
	}
	Printf(lst, label);//リストを表示
}

int main() {
	//山手線の駅
	list<const char*>yamanoteLine{ 
		"Tokyo",      "Kanda",       "Akihabara",
		"Okachimachi","Ueno",        "Uguisudani",
		"Nippori",    "Tabata",      "Komagome",
	    "Sugamo",     "Otsuka",      "Ikebukuro",
	    "Mejiro",     "Takadanobaba","Shin-okubo",
	    "Shinjuku",   "Yoyogi",      "Harajuku",
		"Shibuya",    "Ebisu",       "Meguro",
		"Gotanda",    "Osaki",       "Shinagawa",
		"Tamachi",    "Hamamatsucho","Shimbashi",
		"Yurakucho"
	};
	Printf(yamanoteLine, "1970年");//山手線の駅の表示(1970年)

	addition(yamanoteLine,"Tabata", "Nishi-Nippori", "2019年");//山手線の駅を追加して表示(2019年)

	addition(yamanoteLine,"Tamachi", "Takanawa Gateway", "2022年");//山手線の駅を追加して表示(2022年)

	return 0;
}