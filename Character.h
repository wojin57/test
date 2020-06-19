#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

using namespace std;

class Character
{

public:
	Character();
	~Character();
	
	int gethp() { return hp; }
	void sethp(int _hp) { hp = _hp; }

	int getmaxhp() { return maxhp; }
	void setmaxhp(int _maxhp) { maxhp = _maxhp; }

	int getmp() { return mp; }
	void setmp(int _mp) { mp = _mp; }

	int getmaxmp() { return maxmp; }
	void setmaxmp(int _maxmp) { maxmp = _maxmp; }

	int getatk() { return atk; }
	void setatk(int _atk) { atk = _atk; }

	int getlv() { return lv; }
	void setlv(int _lv) { lv = _lv; }

	string getname() { return name; }
	void setname(string _name) { name = _name; }

	int getmoney() { return money; }
	void setmoney(int _money) { money = _money; }

	int getdef() { return def; }
	void setdef(int _def) { def = _def; }

	string getjob() { return job; }
	void setjob(string _job) { job = _job; }

	int getexp() { return exp; }
	void setexp(int _exp) { exp = _exp; }

	int getmaxexp() { return maxexp; }
	void setmaxexp(int _maxexp) { maxexp = _maxexp; }

	int gethpotion() { return hpotion; }
	void sethpotion(int _hpotion) { hpotion = _hpotion; }

	int getmpotion() { return mpotion; }
	void setmpotion(int _mpotion) { mpotion = _mpotion; }

	void showCharacter() {

		cout << "[캐릭터 정보]" << endl;
		cout << "Lv. " << getlv() << "\t" << "이름 : " << getname() << "\t" << "직업 : " << getjob() << endl;
		cout << "HP : " << gethp() << "/" << getmaxhp() << "\t" << "MP : " << getmp() << "/" << getmaxmp() << "\t" << "EXP : " << getexp() << "/" << getmaxexp() << endl;
		cout << "공격력 : " << getatk() << "\t" << "방어력 : " << getdef() << endl;
		cout << "소지금 : " << getmoney() << " G " << endl;
	}

private :
	int hp = 100;
	int mp = 50;
	int lv = 1;
	int exp = 0;
	int maxexp = 10;
	int atk = 10;
	int def = 5;
	int money = 50;
	int hpotion = 0;
	int mpotion = 0;
	int maxhp = 100;
	int maxmp = 50;
	
	string job = "모험가";
	string name = "륜";

};

