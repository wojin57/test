#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#include "Character.h"
#pragma comment(lib,"winmm.lib")

using namespace std;

class MonsterBase : public Character
{
public:
	MonsterBase();
	~MonsterBase();

	int getmhp() { return mhp; }
	void setmhp(int _mhp) { mhp = _mhp; }

	int getmatk() { return matk; }
	void setmatk(int _matk) { matk = _matk; }

	int getmlv() { return mlv; }
	void setmlv(int _mlv) { mlv = _mlv;}

	string getmname() { return mname; }
	void setmname(string _mname) { mname = _mname; }

	int getmg() { return mg; }
	void setmg(int _mg) { mg = _mg; }

	int getmdef() { return mdef; }
	void setmdef(int _mdef) { mdef = _mdef; }
	
	int getmexp() { return mexp; }
	void setmexp(int _mexp) { mexp = _mexp; }


	void showmonster() {
		cout << "[몬스터 정보]" << endl;
		cout << "Lv. " << mlv << "\t" << "이름 : " << mname << "\t" << endl; 
		cout << "체력 : " << mhp << "\t" << "공격력 : " << matk << "\t" << "방어력 : " << mdef << "\t" << endl;
	}

private :
	int matk;
	int mdef;
	int mlv;
	int mg;
	int mhp;
	string mname;
	int mexp;
};

