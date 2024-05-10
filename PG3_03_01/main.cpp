#include <iostream>
#include <cstdio>
#include<list>
using namespace std;

/// <summary>
/// ���X�g�̕\��
/// </summary>
/// <param name="lst">�\�����������X�g</param>
/// <param name="label">���X�g�̃��x��</param>
void Printf(list<const char*>lst, const char* label) {
	cout <<"\n" << label << "\n";//���x���̕\��
	int lineBreakManager = 0;//���s���Ǘ�����ϐ�
	//���X�g�̒��g��\��
	for (list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		cout << *itr<<",";//�w�̖��O��\��
		lineBreakManager++;//���s����܂ł̃J�E���g
		if (lineBreakManager == 5) {//�J�E���g��5�ɍs��������s
			cout <<"\n";
			lineBreakManager = 0;//�J�E���g��0�ɏ�����
		}
	}
}

/// <summary>
/// ���X�g�ɒǉ����ĕ\��
/// </summary>
/// <param name="lst">�ΏۂƂȂ郊�X�g</param>
/// <param name="prevName">�ǉ��������ꏊ�̑O�ɂ��镨�̖��O</param>
/// <param name="additionName">�ǉ����������̖̂��O</param>
/// <param name="label">���X�g�̃��x��</param>
void addition(list<const char*>&lst,const char* nextName,const char* additionName,const char*label) {
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == nextName) {
			itr = lst.insert(itr, additionName);//���X�g�ɒǉ�
			break;
		}
	}
	Printf(lst, label);//���X�g��\��
}

int main() {
	//�R����̉w
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
	Printf(yamanoteLine, "1970�N");//�R����̉w�̕\��(1970�N)

	addition(yamanoteLine,"Tabata", "Nishi-Nippori", "2019�N");//�R����̉w��ǉ����ĕ\��(2019�N)

	addition(yamanoteLine,"Tamachi", "Takanawa Gateway", "2022�N");//�R����̉w��ǉ����ĕ\��(2022�N)

	return 0;
}